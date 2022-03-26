/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：进度条窗口
 * ***************************************/
#ifndef PROGRESSWIDGET_H
#define PROGRESSWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QTimer>
#include "flowlayout/flowlayout.h"
#include "progresscontrol.h"
#include "LoginSystem/http_login.h"
class FlowLayout;
#pragma execution_character_set("utf-8")
namespace Ui {
class ProgressWidget;
}

class ProgressWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProgressWidget(QWidget *parent = 0);
    ~ProgressWidget();

private slots:
    void on_pushButton_3_clicked();

    void on_refresh_clicked();

private:
    Ui::ProgressWidget *ui;

private:
    void initValue();

};

#endif // PROGRESSWIDGET_H
