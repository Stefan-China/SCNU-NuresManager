/*****************************************
 * 作者: 蔡旭刚
 * 日期: 2021-04-26
 * 功能：身份信息
 * ***************************************/
#ifndef CYLINDERWIDGET_H
#define CYLINDERWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QLinearGradient>
#include <QPainter>
#include <QJsonArray>
#include <globaldef.hpp>
#include "screen/mainobject.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include "camera.h"
#include "flowlayout/flowlayout.h"
#include "cylindercontrol.h"
#include "LoginSystem/http_login.h"
#include "informatiton_patient.h"
#pragma execution_character_set("utf-8")

class FlowLayout;

namespace Ui {
class CylinderWidget;
}

class CylinderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CylinderWidget(QWidget *parent = 0);
    ~CylinderWidget();




private slots:


    void on_pushButton_2_clicked();



    void on_pushButton_3_clicked();

    void on_refresh_clicked();


private:
    void initValue();

private:
    Ui::CylinderWidget *ui;


};

#endif // CYLINDERWIDGET_H
