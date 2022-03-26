#ifndef INFORMATITON_PATIENT_H
#define INFORMATITON_PATIENT_H

#include <QWidget>
//#include <QDebug>
//#include <QMouseEvent>
#include "LoginSystem/http_login.h"
#include "camera.h"
namespace Ui {
class informatiton_patient;
}

class informatiton_patient : public QWidget
{
    Q_OBJECT

public:
    explicit informatiton_patient(QWidget *parent= nullptr,QString patient_id="123") ;
    ~informatiton_patient();

    Camera *m_Camera;
    //设置鼠标按下可移动窗口的区域，在子窗口中必须设置该区域
     void setAreaMovable(const QRect rt);

private slots:
     void on_Del_Btn_close_clicked();
     void initValue(QString id);
     void on_camera_modify_clicked();
     void on_modify_clicked();

private:
    Ui::informatiton_patient *ui;

    QRect m_areaMovable;//可移动窗口的区域，鼠标只有在该区域按下才能移动窗口
    bool m_bPressed;//鼠标按下标志（不分左右键）
    QPoint m_ptPress;//鼠标按下的初始位置

protected:
     void mousePressEvent(QMouseEvent *);
     void mouseMoveEvent(QMouseEvent *);
     void mouseReleaseEvent(QMouseEvent *);
    QByteArray toBase64(QString imgPath) ;
public slots:
     void receiveShowid(QString address_recieve="1",QString brith_recieve="1",QString name_recieve="1", QString sex_recieve="1",QString id_recieve="1",QString photo_image=":/res/res/image/image.png");
};

#endif // INFORMATITON_PATIENT_H
