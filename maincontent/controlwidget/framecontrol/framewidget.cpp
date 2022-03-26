/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：面板窗口
 * ***************************************/
#include "framewidget.h"
#include "ui_framewidget.h"


// 构造函数
FrameWidget::FrameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrameWidget)
{
    ui->setupUi(this);
//    qDebug()<<"FrameWidget";

}

// 析构函数
FrameWidget::~FrameWidget()
{
    delete ui;
}

void medical_ai(int i)
{

        introduce_ai *m_introduce_ai = new introduce_ai(nullptr,i);
        m_introduce_ai->show();
}


void FrameWidget::on_turn_btn_clicked()
{

}
void FrameWidget::on_smart_pre_visits_btn_clicked()
{
    medical_ai(1);
}
void FrameWidget::on_smart_ask_medicine_btn_clicked()
{
    medical_ai(2);
}

void FrameWidget::on_smart_autognosis_btn_clicked()
{
     medical_ai(3);
}
void FrameWidget::on_smart_hospital_guide_btn_clicked()
{
    medical_ai(4);
}

void FrameWidget::on_smart_qus_ans_btn_clicked()
{
     medical_ai(5);
}


