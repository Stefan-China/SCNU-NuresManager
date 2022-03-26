#ifndef Q_CAMERA_H
#define Q_CAMERA_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QCameraInfo>
#include <QList>
#include <QDebug>
#include <QImage>


namespace Ui {
class Q_camera;
}

class Q_camera : public QWidget
{
    Q_OBJECT

public:
    explicit Q_camera(QWidget *parent = nullptr);
    ~Q_camera();




public slots:
    void ShowTheCapture();
    void SavePicture();
    void displayImage(int,QImage image);

public:
    QCamera *camera;//摄像头
    QCameraViewfinder * viewfinder;//摄像头取景器部件
    QCameraImageCapture * imageCapture;//截图部件


private:
    Ui::Q_camera *ui;
};

#endif // Q_CAMERA_H
