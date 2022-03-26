#ifndef INTRODUCE_AI_H
#define INTRODUCE_AI_H
#pragma execution_character_set("utf-8")
#include <QWidget>
#include <QMouseEvent>
namespace Ui {
class introduce_ai;
}

class introduce_ai : public QWidget
{
    Q_OBJECT

public:
    explicit introduce_ai(QWidget *parent = nullptr,int id=0);
    ~introduce_ai();
    //设置鼠标按下可移动窗口的区域，在子窗口中必须设置该区域
     void setAreaMovable(const QRect rt);

private slots:
    void on_Del_Btn_close_clicked();

private:
    Ui::introduce_ai *ui;
    QRect m_areaMovable;//可移动窗口的区域，鼠标只有在该区域按下才能移动窗口
    bool m_bPressed;//鼠标按下标志（不分左右键）
    QPoint m_ptPress;//鼠标按下的初始位置
protected:
     void mousePressEvent(QMouseEvent *);
     void mouseMoveEvent(QMouseEvent *);
     void mouseReleaseEvent(QMouseEvent *);

};

#endif // INTRODUCE_AI_H
