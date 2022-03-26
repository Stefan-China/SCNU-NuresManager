#ifndef INFORMATION_HANDBAND_H
#define INFORMATION_HANDBAND_H

#include <QWidget>
#include <QDebug>
#include "hand_recieve/handrecieve.h"
#include <QTimer>
#include <QMouseEvent>
namespace Ui {
class information_handband;
}

class information_handband : public QWidget
{
    Q_OBJECT

public:
    explicit information_handband(QWidget *parent= nullptr,QString patient_id="123");
    ~information_handband();

    void initValue(QString id);

    //设置鼠标按下可移动窗口的区域，在子窗口中必须设置该区域
    void setAreaMovable(const QRect rt);

    QRect m_areaMovable;//可移动窗口的区域，鼠标只有在该区域按下才能移动窗口
    bool m_bPressed;//鼠标按下标志（不分左右键）
    QPoint m_ptPress;//鼠标按下的初始位置

protected:
     void mousePressEvent(QMouseEvent *);
     void mouseMoveEvent(QMouseEvent *);
     void mouseReleaseEvent(QMouseEvent *);
private:
    Ui::information_handband *ui;
private slots:
    void updateProgress();
    void on_Btn_close_clicked();

signals:
     void signal_send_handbattery(double bat);
};

#endif // INFORMATION_HANDBAND_H
