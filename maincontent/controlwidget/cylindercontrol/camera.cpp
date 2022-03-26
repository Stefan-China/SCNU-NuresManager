#include "camera.h"
#include "ui_camera.h"

const QString  baiduTokenUrl = "https://aip.baidubce.com/oauth/2.0/token?grant_type=client_credentials&client_id=%1&client_secret=%2&";
const char* client_id = "qdLTj8EMR4xdC4aDSiXdpouG";
const char* secret_id = "i5hKuGb63GCP4baqP8G6TL0oEO1InOn9";
const QString Baidu_CardUrl = "https://aip.baidubce.com/rest/2.0/ocr/v1/idcard?access_token=%1";

Camera::Camera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);

    //背景无边框+鼠标拖拽
    setWindowFlags(Qt::FramelessWindowHint);//无边框
    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    m_areaMovable = geometry();
    m_bPressed = false;
    this->setAttribute(Qt::WA_DeleteOnClose,true);  //关掉的时候同时删除
    this->initView();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerSlot()));
    timer->start(TIMER_DELAY);
}

Camera::~Camera()
{
    if(timer->isActive())
        timer->stop();

    delete ui;
    delete finder;
    delete timer;
}
void Camera::initView()
{

    ui->savePathLEdit->setText(QStandardPaths::standardLocations(QStandardPaths::PicturesLocation)[0]);
    finder = new QCameraViewfinder();
    ui->cameraView->addWidget(finder);

    this->timerSlot();

    connect(ui->cameraBtn, SIGNAL(clicked(bool)), this, SLOT(cameraBtnSlot()));
    connect(ui->clearImgBtn, SIGNAL(clicked(bool)), this, SLOT(clearImgBtnSlot()));
    connect(ui->choosePathBtn, SIGNAL(clicked(bool)), this, SLOT(choosePathBtnSlot()));
    connect(ui->captureBtn, SIGNAL(clicked(bool)), this, SLOT(captureBtnSlot()));
    connect(ui->openImgBtn, SIGNAL(clicked(bool)), this, SLOT(openImgBtnSlot()));
}

void Camera::updateCameras()
{
    camerasInfo.clear();
    cameraNames.clear();
    cameraNames << "";

    QList<QCameraInfo> infos = QCameraInfo::availableCameras();
    foreach (const QCameraInfo &cameraInfo, infos)
    {
        camerasInfo << cameraInfo;
        cameraNames << cameraInfo.description();
    }
}

void Camera::cameraBtnSlot()
{
    if(ui->cameraCBox->isEnabled())
        if(ui->cameraCBox->currentIndex() == 0)
            QMessageBox::information(this, "警告", "选择一个摄像头");
        else
        {
            camera = new QCamera(camerasInfo[ui->cameraCBox->currentIndex()-1]);
            capture = new QCameraImageCapture(camera);

            capture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
            camera->setCaptureMode(QCamera::CaptureStillImage);

            connect(capture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(cameraCaptureSlot(int,QImage)));
            connect(capture, SIGNAL(error(int,QCameraImageCapture::Error,QString)), this, SLOT(captureErrorSlot(int,QCameraImageCapture::Error,QString)));
            connect(camera, SIGNAL(stateChanged(QCamera::State)), this, SLOT(cameraStateSlot(QCamera::State)));
            connect(camera, SIGNAL(error(QCamera::Error)), this, SLOT(cameraErrorSlot(QCamera::Error)));

            camera->setViewfinder(finder);
            camera->start();

            if(camera->state() == QCamera::ActiveState)
            {
                ui->cameraCBox->setEnabled(false);
                ui->cameraBtn->setText("关闭");
                finder->show();
            }
            else
                QMessageBox::information(this, "警告", "不能启动摄像头");
        }
    else
    {
        finder->hide();
        ui->cameraCBox->setEnabled(true);
        ui->cameraBtn->setText("启动");

        delete capture;
        delete camera;
    }
}

void Camera::clearImgBtnSlot()
{
    ui->imgShowLabel->clear();
}

void Camera::choosePathBtnSlot()
{
    QString path, choosePath;

    path = ui->savePathLEdit->text();

    if(QFileInfo(path).exists() || QFileInfo(path + ".jpg").exists())
        choosePath = path;
    else
        choosePath = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation)[0];

    choosePath = QFileDialog::getExistingDirectory(this, "选择截图保存路径", choosePath);

    if(choosePath.isEmpty())
        ui->savePathLEdit->setText(path);
    else
        ui->savePathLEdit->setText(choosePath);
}

void Camera::captureBtnSlot()
{
    if(ui->cameraCBox->isEnabled())
        QMessageBox::information(this, "警告", "请打开摄像头后重试");
    else if(capture->isReadyForCapture())
    {
     capture->capture(ui->savePathLEdit->text());
    }

    else
        QMessageBox::information(this, "警告", "截图失败，请稍后重试");
}

void Camera::openImgBtnSlot()
{
    QString path;
    if(ui->savePathLEdit->text().isEmpty())
        path = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation)[0];
    else
        path = ui->savePathLEdit->text();

    if(QFileInfo(path).exists())
        QDesktopServices::openUrl(QUrl::fromLocalFile(path));
    else if(QFileInfo(path + ".jpg").exists())
        QDesktopServices::openUrl(QUrl::fromLocalFile(path + ".jpg"));
    else
        QMessageBox::information(this, "警告", "当前路径不存在，请检查路径后重试");
}

void Camera::cameraCaptureSlot(int id, QImage image)
{
    Q_UNUSED(id)

    ui->imgShowLabel->setPixmap(QPixmap::fromImage(image.scaled(ui->imgShowLabel->geometry().size(), Qt::KeepAspectRatio)));
}

void Camera::captureErrorSlot(int id, QCameraImageCapture::Error error, QString errorString)
{
    if(id == 1 && error == QCameraImageCapture::ResourceError)
        QMessageBox::information(this, "保存失败", "截图保存失败，请检查路径后重试");
    else
        QMessageBox::information(this, "Capture error", errorString);
}

void Camera::cameraStateSlot(QCamera::State state)
{
    switch (state)
    {
    case QCamera::ActiveState:
        break;
    case QCamera::UnloadedState:
        if(!ui->cameraCBox->isEnabled())
        {
            this->finder->hide();
            ui->cameraCBox->setEnabled(true);
            ui->cameraBtn->setText("启动");

            delete capture;
            delete camera;
        }
        break;
    case QCamera::LoadedState:
        break;
    }
}

void Camera::cameraErrorSlot(QCamera::Error error)
{
    if(error != QCamera::NoError && !ui->cameraCBox->isEnabled())
    {
        this->finder->hide();
        ui->cameraCBox->setEnabled(true);
        ui->cameraBtn->setText("启动");

        delete capture;
        delete camera;

        QMessageBox::information(this, "Camera error", camera->errorString());
    }
}

void Camera::timerSlot()
{
    qDebug()<<"时间管理";
    this->updateCameras();

    while(ui->cameraCBox->count() > cameraNames.size())
        ui->cameraCBox->removeItem(cameraNames.size());
    while(ui->cameraCBox->count() < cameraNames.size())
        ui->cameraCBox->addItem(NULL);
    for(int i = 0; i < cameraNames.size(); i++)
        ui->cameraCBox->setItemText(i, cameraNames[i]);
}
void Camera::mousePressEvent(QMouseEvent *e)
{
  //鼠标左键
  if(e->button() == Qt::LeftButton)
  {
  m_ptPress = e->pos();
  m_bPressed = m_areaMovable.contains(m_ptPress);
  }
}

void Camera::mouseMoveEvent(QMouseEvent *e)
{
  if(m_bPressed)
  {
  move(pos() + e->pos() - m_ptPress);
  }
}

void Camera::mouseReleaseEvent(QMouseEvent *)
{
  m_bPressed = false;
}

//设置鼠标按下的区域
void Camera::setAreaMovable(const QRect rt)
{
  if(m_areaMovable != rt)
  {
  m_areaMovable = rt;
  }
}

void Camera::on_Del_Btn_close_clicked()
{
    qDebug()<<"图像识别";
    this->close();
}


void Camera::on_pushButton_clicked()
{
    imgPath = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());

    if(imgPath.isEmpty())
    {
        QMessageBox::warning(this,"提示","没有选择病人身份证照片,请选择!");//如未选择，提示选择图片
    }

    QByteArray img = Myimage::imageToBase64(imgPath);
    qDebug()<<imgPath;
    QByteArray imgData = "id_card_side=front&image="+img+"&detect_photo=true";

    //获取access_token
    QByteArray replyData;
    QString url = QString(baiduTokenUrl).arg(client_id).arg(secret_id);
    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/x-www-form-urlencoded"));
    QString accessToken;

    bool result =Http::post_sync(url,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        accessToken = obj.value("access_token").toString();
        qDebug() << accessToken;
    }
    replyData.clear();
    QString imgurl = Baidu_CardUrl.arg(accessToken);
    result = Http :: post_sync(imgurl,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        QJsonValue val = obj.value("words_result");

        QString photo = obj.value("photo").toString();
        if(val.isObject())
        {

            QString address = val.toObject().value("住址").toObject().value("words").toString();
            QString brith = val.toObject().value("出生").toObject().value("words").toString();
            QString name = val.toObject().value("姓名").toObject().value("words").toString();
            QString sex = val.toObject().value("性别").toObject().value("words").toString();
            QString id = val.toObject().value("公民身份号码").toObject().value("words").toString();

            emit id_information_send(address,brith,name, sex,id,photo);
            QMessageBox::information(this, "提示", "信息加载成功");
            this->hide();

        }
    }
}
