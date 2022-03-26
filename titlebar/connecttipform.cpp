#include "connecttipform.h"

ConnectTipForm::ConnectTipForm(QWidget *parent) : QDialog(parent)
{
    this->setAttribute(Qt::WA_DeleteOnClose,true);  //关掉的时候同时删除
    this->resize(390,260);
    setWindowFlags(Qt::FramelessWindowHint); //设置窗体无边框，不可拖动拖拽拉伸
        //setAttribute(Qt::WA_TranslucentBackground,true);  //半透明

    //setWindowModality(Qt::ApplicationModal);//设置窗体模态，要求该窗体没有父类，否则无效
    this->setModal(true);

    m_labelBG=new QLabel(this);
    m_labelBG->setStyleSheet(
                "border-image:url(:/res/res/bluetooth_connect/bg.png)"
                            //"background-color: #fff6e8;"
                            // "border:1px solid #8bbfc3;"
                );
    m_labelBG->setGeometry(0,0,this->width(),this->height());

    m_buttonClose=new QPushButton(this);
    connect(m_buttonClose,&QPushButton::clicked,this,[=](){this->close();});
    //:/selection/home_resources/selectimage/close.png
    m_buttonClose->setStyleSheet("border-image:url(:/res/res/bluetooth_connect/close.png)");
    m_buttonClose->setCursor(Qt::PointingHandCursor);
    m_buttonClose->setGeometry(this->width()*616/674,this->height()*25/329,20,19);

    m_labelHead=new QLabel(this);
    QFont font("SimHei");
    font.setPixelSize(23);
    m_labelHead->setFont(font);
    m_labelHead->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    m_labelHead->setText(QString::fromLocal8Bit("请检查设备，连接蓝牙"));
    m_labelHead->setStyleSheet("QLabel{background:transparent;color: #ff8f34;}");
    m_labelHead->setGeometry(0,196,this->width(),26);

    m_labelTip=new QLabel(this);
    //QFont font("SimHei");
    font.setPixelSize(14);
    m_labelTip->setFont(font);
    m_labelTip->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    m_labelTip->setText(QString::fromLocal8Bit("连接出现问题啦，请在设备上打开蓝牙"));
    m_labelTip->setStyleSheet("QLabel{background:transparent;color: #898989;}");
    m_labelTip->setGeometry(0,230,this->width(),18);
    m_labelTip->hide();

}

void ConnectTipForm::setTipText(QString tip)
{
    m_labelHead->setText(tip);
}

void ConnectTipForm::mousePressEvent(QMouseEvent *event)
{
    QRect *rc=new QRect(5,5,this->width()*0.9,80);
    if(rc->contains(this->mapFromGlobal(QCursor::pos()))==true)//如果按下的位置
    {
      if (event->button() == Qt::LeftButton)
     {
       m_WindowPos = this->pos();
       m_MousePos = event->globalPos();
       this->m_MousePressed = true;
      }
    }
}

void ConnectTipForm::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        this->m_MousePressed = false;
    }
}

void ConnectTipForm::mouseMoveEvent(QMouseEvent *event)
{
    if (m_MousePressed)
    {
        this->move(m_WindowPos + (event->globalPos() - m_MousePos));
    }
}
