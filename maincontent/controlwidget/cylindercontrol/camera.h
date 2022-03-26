#ifndef CAMERA_H
#define CAMERA_H

#pragma execution_character_set("utf-8")
#include <QMainWindow>
#include <QStringList>
#include <QList>
#include <QCameraViewfinder>
#include <QCameraInfo>
#include <QCamera>
#include <QCameraImageCapture>
#include <QTimer>
#include <QMessageBox>
#include <QFileDialog>
#include <QDesktopServices>
#include <QStandardPaths>
#include <QFileInfo>
#include <QDebug>
#include <QMouseEvent>
#include "baidu_image/myimage.h"
#include "baidu_image/http.h"
#include <QJsonObject>
#include <QJsonDocument>
//#include "informatiton_patient.h"

#define TIMER_DELAY 1000
namespace Ui {
class Camera;
}


class Camera : public QMainWindow
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = nullptr);
    ~Camera();
    //???????????????????????????
     void setAreaMovable(const QRect rt);

private:
    Ui::Camera *ui;
    QRect m_areaMovable;//?????????????????????????
    bool m_bPressed;//?????????????
    QPoint m_ptPress;//?????????

    QStringList cameraNames;
    QList<QCameraInfo> camerasInfo;

    QCamera *camera;
    QCameraImageCapture *capture;
    QCameraViewfinder *finder;

    QTimer *timer;
    QString imgPath;

    void initView();
    void updateCameras();

private slots:
    void cameraBtnSlot();
    void clearImgBtnSlot();
    void choosePathBtnSlot();
    void captureBtnSlot();
    void openImgBtnSlot();

    void cameraCaptureSlot(int id, QImage image);
    void captureErrorSlot(int id, QCameraImageCapture::Error error, QString errorString);
    void cameraStateSlot(QCamera::State state);
    void cameraErrorSlot(QCamera::Error error);

    void timerSlot();
    void on_Del_Btn_close_clicked();

    void on_pushButton_clicked();

protected:
     void mousePressEvent(QMouseEvent *);
     void mouseMoveEvent(QMouseEvent *);
     void mouseReleaseEvent(QMouseEvent *);

signals:
     void id_information_send(QString address,QString brith,QString name, QString sex,QString id,QString photo_image);
};

#endif// CAMERA_H

