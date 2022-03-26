#pragma execution_character_set("utf-8")
#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include<QEvent>
#include<QCloseEvent>
#include<QPainter>
#include<QGraphicsDropShadowEffect>
#include<QtMath>
#include<QPixmap>
#include<QBitmap>
#include<QMouseEvent>
#include<QTimer>
#include<QRegExp>
#include<QRegExpValidator>
#include<QDebug>
#include <QString>
#include "qt_windows.h"
#include "WinUser.h"
#include <tlhelp32.h>
#include <string.h>
#include "TlHelp32.h"
#include "winbase.h"
#include <QLineEdit>
#include "http_login.h"

//using namespace JsonRPC;

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

    //鼠标拖动窗口
    QPoint drag_point;

    //鼠标左键是否按下的标志
    bool pressed;

    //定义定时器对象

    QTimer *timer02;

    //定义一个倒计时数
    int  count_downNUM;

    //定义一个正则表达式
    QRegExp rx;


    //4.25+ 弹键盘用
    int flag = 1;



    QFrame *frame;                            //绘制阴影
    QGraphicsDropShadowEffect *shadow_effect; //绘制阴影

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent* event);
    void closeEvent(QCloseEvent *event);

    //开启一次倒计时
    void count_down2();//密码可视
    //延时函数
    void Sleep(int msec);
signals:
    void Show_login();
public slots:
    void Register_clicked();//立即注册按钮槽函数
    void CheckAccountNum();//账号输入完成之后对账号进行检测


private:
    Ui::Register *ui;
    std::string key;
    QMap<QString, QString>  map_sign;
};

#endif // REGISTER_H
