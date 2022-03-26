#include "informatiton_patient.h"
#include "ui_informatiton_patient.h"
extern QString cookie;
const QString  IDUrl = "http://swxin.top:8090/patient/getPatientEntityByCardId/%1";

informatiton_patient::informatiton_patient(QWidget *parent,QString patient_id) :
    QWidget(parent),
    ui(new Ui::informatiton_patient)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);  //关掉的时候同时删除
    qDebug()<<patient_id;
    //背景无边框+鼠标拖拽
    setWindowFlags(Qt::FramelessWindowHint);//无边框
    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    m_areaMovable = geometry();
    m_bPressed = false;

    initValue(patient_id);
    m_Camera= new Camera();

    connect(m_Camera, &Camera::id_information_send, this, &informatiton_patient::receiveShowid);

}

informatiton_patient::~informatiton_patient()
{
    qDebug()<<"析构信息表";
    delete ui;
}

void informatiton_patient::receiveShowid(QString address_recieve,QString brith_recieve,QString name_recieve, QString sex_recieve, QString id_recieve,QString photo_image_recieve)
{
    ui->name_id->setText(name_recieve);
    ui->id_card_text->setText(id_recieve);

    ui->textEdit_address->setText(address_recieve);
    ui->textEdit_sex->setText(sex_recieve);
    ui->textEdit_brith->setText(brith_recieve);
    QPixmap photo_image;
    photo_image.loadFromData(QByteArray::fromBase64(photo_image_recieve.toLocal8Bit()));
    ui->Photo->setPixmap(photo_image);

}
void informatiton_patient::initValue(QString id)
{

    QByteArray replyData;
    QJsonObject obj;
    QString imgurl=QString(IDUrl).arg(id);

    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("false"));
    header.insert(QString("cookie"),cookie);
    bool result = http_login :: get(imgurl,header,replyData);
    if (result)
    {
       QJsonObject obj = QJsonDocument:: fromJson(replyData).object();

       double status = obj.value("status").toDouble();

       if (status == 0)
       {
           QMessageBox::information(NULL, "错误","病人ID号输入错误请重新输入");
           this->close();
       }
       QJsonValue val = obj.value("data");

       if(val.isObject())
       {
//           QPixmap photo_image;
//           photo_image.loadFromData(QByteArray::fromBase64(val.toObject().value("imageUrl").toString().toLocal8Bit()));

           QUrl url("http://"+val.toObject().value("imageUrl").toString());
           QNetworkAccessManager manager;
           QEventLoop loop;

           // qDebug() << "Reading picture form " << url;
           QNetworkReply *reply = manager.get(QNetworkRequest(url));
           //请求结束并下载完成后，退出子事件循环
           QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
           //开启子事件循环
           loop.exec();

           QByteArray jpegData = reply->readAll();
           QPixmap pixmap;
           pixmap.loadFromData(jpegData);
           ui->Photo->setPixmap(pixmap); // 你在QLabel显示图片


            qDebug()<<url;
           ui->name_id->setText(val.toObject().value("name").toString());
           ui->patient_id->setText(val.toObject().value("cardId").toString());

           ui->textEdit_address->setText(val.toObject().value("address").toString());
           ui->textEdit_sex->setText(val.toObject().value("sex").toString());
           ui->textEdit_brith->setText(val.toObject().value("birthday").toString());
           ui->textEdit_career->setText(val.toObject().value("career").toString());
           ui->textEdit_nationality->setText(val.toObject().value("nationality").toString());
           ui->textEdit_telephone->setText(val.toObject().value("telphone").toString());
           ui->textEdit_maritalStatus->setText(val.toObject().value("maritalStatus").toString());

           ui->textEdit_pastHistory->setText(val.toObject().value("pastHistory").toString());
           ui->textEdit_personalHistory->setText(val.toObject().value("personalHistory").toString());
           ui->textEdit_familyHistory->setText(val.toObject().value("familyHistory").toString());
            QJsonObject  patientMdeicalRecordRspVo=val.toObject().value("patientMdeicalRecordRspVo").toObject();

            patientMdeicalRecordRspVo.value("conditionDescription").toString();//主诉
            patientMdeicalRecordRspVo.value("prescription").toString();//处方


            ui->diagnosisResult_result->setText(patientMdeicalRecordRspVo.value("diagnosisResult").toString());//初步诊断结果
            ui->drugcost->setText(patientMdeicalRecordRspVo.value("drugCost").toString());//费用
            ui->medicalOrder_text->setText(patientMdeicalRecordRspVo.value("medicalOrder").toString()); //医嘱

            QJsonObject  registerPatientRspVo=val.toObject().value("registerPatientRspVo").toObject();

            ui->Outpatient_class->setText(registerPatientRspVo.value("department").toString()); //部门


            ui->Outpatient_style->setText(registerPatientRspVo.value("registerType").toString());//门诊类型
            ui->doctor_name->setText(registerPatientRspVo.value("doctor").toString());//医生
            ui->Registra_name->setText(registerPatientRspVo.value("operatorName").toString()) ;       //挂号员
            if(registerPatientRspVo.value("chargeStatus").toString()==0)
            ui->chargeStatus->setText("未收费");
            else
            ui->chargeStatus->setText("已收费");

            registerPatientRspVo.value("treatmentPrice").toString();//挂号费用
            registerPatientRspVo.value("payType").toString();//支付类型

            registerPatientRspVo.value("operatorEmail").toString();//挂号员邮箱
            registerPatientRspVo.value("registerStatus").toString();//挂号状态。-1:过期，1:挂号成功
            registerPatientRspVo.value("treatmentStatus").toString();//就诊状态,包括门诊，体检。0:未就诊，1:已就诊



       }

    }

}

void informatiton_patient::mousePressEvent(QMouseEvent *e)
{
  //鼠标左键
  if(e->button() == Qt::LeftButton)
  {
  m_ptPress = e->pos();
  m_bPressed = m_areaMovable.contains(m_ptPress);
  }
}

void informatiton_patient::mouseMoveEvent(QMouseEvent *e)
{
  if(m_bPressed)
  {
  move(pos() + e->pos() - m_ptPress);
  }
}

void informatiton_patient::mouseReleaseEvent(QMouseEvent *)
{
  m_bPressed = false;
}

//设置鼠标按下的区域
void informatiton_patient::setAreaMovable(const QRect rt)
{
  if(m_areaMovable != rt)
  {
  m_areaMovable = rt;
  }
}

void informatiton_patient::on_Del_Btn_close_clicked()
{
    this->close();
}

void informatiton_patient::on_camera_modify_clicked()
{

    m_Camera->show();
}

void informatiton_patient::on_modify_clicked()
{
    QByteArray replyData;
    QJsonObject obj;
    QString imgurl=QString("http://swxin.top:8090/patient/changePatientInfo");

    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/json"));//
    header.insert(QString("cookie"),cookie);

    //生成json
    obj.insert("cardId", ui->patient_id->text());
    obj.insert("name", ui->name_id->text());
    obj.insert("career", ui->textEdit_career->toPlainText());
    obj.insert("sex", ui->textEdit_sex->toPlainText());
    obj.insert("birthday", ui->textEdit_brith->toPlainText());
    obj.insert("nationality", ui->textEdit_nationality->toPlainText());
    obj.insert("address", ui->textEdit_address->toPlainText());
    obj.insert("telphone", ui->textEdit_telephone->toPlainText());
    obj.insert("maritalStatus", ui->textEdit_maritalStatus->toPlainText());
    obj.insert("personalHistory", ui->textEdit_personalHistory->toPlainText());
    obj.insert("pastHistory", ui->textEdit_pastHistory->toPlainText());
    obj.insert("familyHistory", ui->textEdit_familyHistory->toPlainText());

    QPixmap pix;
    pix = ui->Photo->grab(ui->Photo->rect());
    pix.save("./caixugang.png");

    QByteArray a = toBase64("./caixugang.png");

    qDebug()<<a;
    obj.insert("imgData", "data:image/png;base64,"+QString(a));


    QByteArray body = QJsonDocument(obj).toJson(QJsonDocument::Compact);
    QString str(body);

    bool result = http_login :: post_ourapi(imgurl,header,body,replyData);
    qDebug()<<obj;
    if (result)
    {
       QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
       double status = obj.value("status").toDouble();
       qDebug()<<obj;
       if(status==1)
       {
           QMessageBox::information(NULL, "提示","信息修改完毕");
       }
       if(status==0)
       {
           QMessageBox::information(NULL, "提示","信息修改错误");
       }

    }
}

QByteArray informatiton_patient::toBase64(QString imgPath)
{
    QImage image(imgPath);
    QByteArray ba;
    QBuffer buf(&ba);
    image.save(&buf, "png");
    QByteArray hexed = ba.toBase64();
    buf.close();
    return hexed;
}
