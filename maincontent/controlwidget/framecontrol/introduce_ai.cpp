#include "introduce_ai.h"
#include "ui_introduce_ai.h"

introduce_ai::introduce_ai(QWidget *parent,int id) :
    QWidget(parent),
    ui(new Ui::introduce_ai)
{
    ui->setupUi(this);
    //背景无边框+鼠标拖拽
    setWindowFlags(Qt::FramelessWindowHint);//无边框
    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    this->setAttribute(Qt::WA_DeleteOnClose,true);  //关掉的时候同时删除
    m_areaMovable = geometry();
    m_bPressed = false;
    switch(id)
    {
        case 1: ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=593769370bdf3f5205f6cbe0")); break;
        case 3: ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=586232fc0bdf3f6784d211bb")); break;
        case 4: ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=59ba2b63bea7c00ecd02dfb9"));break;
        case 2: ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=5ad42e95bea7c06caf241b92"));break;
        case 5: ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=5a7d6767bea7c06caf241b78"));break;
    }

}

introduce_ai::~introduce_ai()
{
    delete ui;
}

void introduce_ai::on_Del_Btn_close_clicked()
{
    qDebug()<<"AI问答";
    this->close();
}

void introduce_ai::mousePressEvent(QMouseEvent *e)
{
  //鼠标左键
  if(e->button() == Qt::LeftButton)
  {
  m_ptPress = e->pos();
  m_bPressed = m_areaMovable.contains(m_ptPress);
  }
}

void introduce_ai::mouseMoveEvent(QMouseEvent *e)
{
  if(m_bPressed)
  {
  move(pos() + e->pos() - m_ptPress);
  }
}

void introduce_ai::mouseReleaseEvent(QMouseEvent *)
{
  m_bPressed = false;
}

//设置鼠标按下的区域
void introduce_ai::setAreaMovable(const QRect rt)
{
  if(m_areaMovable != rt)
  {
  m_areaMovable = rt;
  }
}
