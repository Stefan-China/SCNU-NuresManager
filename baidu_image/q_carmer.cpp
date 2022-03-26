#include "q_carmer.h"
#include "ui_q_carmer.h"

Q_carmer::Q_carmer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Q_carmer)
{
    ui->setupUi(this);
    camera=new QCamera;//摄像头
    viewfinder=new QCameraViewfinder(this);
    imageCapture=new QCameraImageCapture(camera);//截图部件
    camera->setViewfinder(viewfinder);

    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(ShowTheCapture()));
    QObject::connect(ui->SaveButton,SIGNAL(clicked()),this,SLOT(SavePicture()));
    QObject::connect(imageCapture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(displayImage(int,QImage)));
    imageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    camera->setCaptureMode(QCamera::CaptureStillImage);
    camera->setViewfinder(viewfinder);
    camera->start(); //启动摄像头
}

Q_carmer::~Q_carmer()
{
    delete ui;
}


Q_camera::~Q_camera()
{
    delete ui;
}

void Q_camera::ShowTheCapture()
{
    imageCapture->capture();
}
void Q_camera::displayImage(int ,QImage image)
{
    //QImage image1(ui->label->x(),ui->label->y(),QImage::Format_RGB888);
   // image=new QImage(220,220,QImage::Format_RGB888);
   // image.setPixel(,Format_RGB888);
   // QColor color(QImage::Format_RGB888);
   // image.fill(color);
    //QImage image2;
    //QImage::Format format =  image1.format();
    //qDebug() << (int)format;
    image=image.convertToFormat(QImage::Format_RGB888);
    ui->label->setPixmap(QPixmap::fromImage(image));
    QImage::Format format =  image.format();
    qDebug() << (int)format;

}
void Q_camera::SavePicture()
{
    const QPixmap *pixmap = ui->label->pixmap();
    if(pixmap)
    {
         pixmap->save("E:\\hallo.jpg");
         qDebug()<<"保存上了"<<endl;
    }

}
