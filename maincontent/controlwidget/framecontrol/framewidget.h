/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：面板窗口
 * ***************************************/
#ifndef FRAMEWIDGET_H
#define FRAMEWIDGET_H

#include <QWidget>
#include "introduce_ai.h"
class FlowLayout;

namespace Ui {
class FrameWidget;
}

class FrameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FrameWidget(QWidget *parent = 0);
    ~FrameWidget();

private slots:


    void on_turn_btn_clicked();

    void on_smart_ask_medicine_btn_clicked();

    void on_smart_hospital_guide_btn_clicked();

    void on_smart_autognosis_btn_clicked();

    void on_smart_qus_ans_btn_clicked();

    void on_smart_pre_visits_btn_clicked();


private:
    Ui::FrameWidget *ui;
//    void Medical(int);

};

#endif // FRAMEWIDGET_H
