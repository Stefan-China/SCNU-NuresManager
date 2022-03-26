#ifndef CONNECTTIPFORM_H
#define CONNECTTIPFORM_H

#include <QDialog>
#include<QLabel>
#include<QPushButton>
#include<QMouseEvent>
class ConnectTipForm : public QDialog
{
    Q_OBJECT
public:
    explicit ConnectTipForm(QWidget *parent = nullptr);
    void setTipText(QString tip); //设置提示文字

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    //void paintEvent(QPaintEvent*);

    bool    m_MousePressed;
    QPoint  m_MousePos;
    QPoint  m_WindowPos;
signals:

public slots:


private:
    QLabel* m_labelBG,*m_labelHead,*m_labelTip;
    QPushButton* m_buttonClose;
};

#endif // CONNECTTIPFORM_H
