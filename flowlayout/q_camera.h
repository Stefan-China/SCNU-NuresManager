#ifndef Q_CAMERA_H
#define Q_CAMERA_H


class Q_camera
{
public:
    Q_camera();
};



#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QCameraInfo>
#include <QList>
#include <QDebug>
#include <QImage>
namespace Ui {
class Widget;

}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void ShowTheCapture();
    void SavePicture();
    void displayImage(int,QImage image);
private:
    Ui::Widget *ui;
public:
    QCamera *camera;//摄像头
    QCameraViewfinder * viewfinder;//摄像头取景器部件
    QCameraImageCapture * imageCapture;//截图部件
};

