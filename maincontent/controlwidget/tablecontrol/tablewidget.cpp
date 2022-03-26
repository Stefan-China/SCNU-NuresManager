/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：表格窗口
 * ***************************************/
#include "tablewidget.h"
#include "ui_tablewidget.h"
#include"QDebug"
#pragma execution_character_set("utf-8")
// 构造函数
TableWidget::TableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableWidget)
{
    ui->setupUi(this);
    qDebug()<<"TableWidget";
    this->initValue();
}

// 析构函数
TableWidget::~TableWidget()
{
    delete ui;
}
//延时函数(单位:毫秒)
void TableWidget::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
// 初始化数据
void TableWidget::initValue()
{
    QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(1000*5);
    myTimer->start();
    connect(myTimer, SIGNAL(timeout()), this, SLOT(Progress()));

}

// 更新进度条
void TableWidget::Progress()
{
    qDebug()<<"输液器监测";
    handRecieve *recieve=new handRecieve;
    recieve->Drop_Server_Recieve();
    QString battery_drop = recieve->battery_flag;
    if(recieve->connect_flag=="connect")
    {
        if(recieve->status_flag=="open")
        {
            ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/transfuse_1.png"));
            Sleep(500);
            ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/transfuse_2.png"));
            Sleep(500);
            ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/transfuse_3.png"));
            Sleep(500);
            ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/transfuse_full.png"));
            Sleep(500);
        }else
        {
            ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/transfuse_full.png"));
        }
    }else
    {
         ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/no_connect.png"));
    }

    delete recieve;
}



void TableWidget::on_open_clicked()
{
    handRecieve *recieve=new handRecieve;
    recieve->Drop_open();
    delete recieve;
}

void TableWidget::on_lock_clicked()
{
    handRecieve *recieve=new handRecieve;
    recieve->Drop_lock();
    delete recieve;
}
