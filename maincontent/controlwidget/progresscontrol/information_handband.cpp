#include "information_handband.h"
#include "ui_information_handband.h"

information_handband::information_handband(QWidget *parent,QString patient_id) :
    QWidget(parent),
    ui(new Ui::information_handband)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);  //关掉的时候同时删除
    qDebug()<<patient_id;
    //背景无边框+鼠标拖拽
    setWindowFlags(Qt::FramelessWindowHint);//无边框
    setAttribute(Qt::WA_TranslucentBackground);//背景透明

    m_areaMovable = geometry();
    m_bPressed = false;
   initValue(patient_id);

}

information_handband::~information_handband()
{
    delete ui;
}
void information_handband::initValue(QString id)
{

    QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(1000*5);
    myTimer->start();
    connect(myTimer, SIGNAL(timeout()), this, SLOT(updateProgress()));

}


// 更新进度条
void information_handband::updateProgress()
{
    qDebug()<<"==========================================================";
    handRecieve *recieve=new handRecieve;
    recieve->Server_Recieve();
    ui->Heartbeat->setText(QString::number(recieve->ui_Heartbeat, 'f', 2));
    ui->Diastolic->setText(QString::number(recieve->ui_Shrink, 'f', 2)+"/"+QString::number(recieve->ui_Diastolic, 'f', 2));
    ui->temperature->setText(QString::number(recieve->ui_Bodytemperature, 'f', 2)+"/"+QString::number(recieve->ui_Wristtemperature, 'f', 2));
    ui->Steps->setText(QString::number(recieve->ui_Steps, 'f', 2));

    emit signal_send_handbattery(recieve->ui_Battery);
    delete recieve;
}
void information_handband::mousePressEvent(QMouseEvent *e)
{
  //鼠标左键
  if(e->button() == Qt::LeftButton)
  {
  m_ptPress = e->pos();
  m_bPressed = m_areaMovable.contains(m_ptPress);
  }
}

void information_handband::mouseMoveEvent(QMouseEvent *e)
{
  if(m_bPressed)
  {
  move(pos() + e->pos() - m_ptPress);
  }
}

void information_handband::mouseReleaseEvent(QMouseEvent *)
{
  m_bPressed = false;
}

//设置鼠标按下的区域
void information_handband::setAreaMovable(const QRect rt)
{
  if(m_areaMovable != rt)
  {
  m_areaMovable = rt;
  }
}

void information_handband::on_Btn_close_clicked()
{
    this->close();
}
