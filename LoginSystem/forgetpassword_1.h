#pragma execution_character_set("utf-8")
#ifndef FORGETPASSWORD_1_H
#define FORGETPASSWORD_1_H

#include <QWidget>
#include<QTimer>
#include<QRegExp>
#include<QRegExpValidator>
#include<QEvent>
#include<QPainter>
#include<QGraphicsDropShadowEffect>
#include<QtMath>
#include<QPixmap>
#include<QBitmap>
#include<QMouseEvent>
#include<QCloseEvent>
#include<QHttpMultiPart>
#include<QHttpPart>
#include"http_login.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QHttpPart>
#include <QHttpMultiPart>
#include <QUrl>
#include<QFile>
#include <QEventLoop>
#include<QJsonParseError>
#include<QJsonDocument>
#include<QJsonObject>

#include <QString>
#include "qt_windows.h"
#include "WinUser.h"
#include <tlhelp32.h>
#include <string.h>
#include "TlHelp32.h"
#include "winbase.h"
#include <QDebug>
#include <QLineEdit>





namespace Ui {
class ForgetPassword_1;
}

class ForgetPassword_1 : public QWidget
{
    Q_OBJECT

public:
    explicit ForgetPassword_1(QWidget *parent = 0);
    ~ForgetPassword_1();
protected:
    //定义定时器对象

    QTimer *timer04;


    //定义一个倒计时数
    int  count_downNUM;

    //定义一个正则表达式
    QRegExp rx;

    //定义一个加解密工具对象
    //DES_ECB EnDecryptTool;

//    //定义一个签名工具对象
//    Sign_algorithm SignTool;

    //加密的密钥
    std::string key;



    //窗口关闭事件
    void closeEvent(QCloseEvent *event);

    //开启倒计时

    void count_down1();

    //延时函数
    void Sleep(int msec);

    //鼠标拖动窗口
    QPoint drag_point;

    //鼠标左键是否按下的标志
    bool pressed;



    QFrame *frame;                            //绘制阴影
    QGraphicsDropShadowEffect *shadow_effect; //绘制阴影

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent* event);
public slots:
    void check_phoneNum();
    void Submit();//提交按钮槽函数

private:
    Ui::ForgetPassword_1 *ui;
    QMap<QString, QString>  map_sign;

signals:
    void Toshow_login();
};

#endif // FORGETPASSWORD_1_H
