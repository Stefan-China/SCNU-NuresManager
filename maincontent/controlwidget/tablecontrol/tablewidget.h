/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：表格窗口
 * ***************************************/
#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H

#include <QWidget>
#include <QMovie>
#include <QTimer>
#include "hand_recieve/handrecieve.h"
namespace Ui {
class TableWidget;
}

class TableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TableWidget(QWidget *parent = 0);
    ~TableWidget();
    QMovie *movie;
    //延时函数
    void Sleep(int msec);

private slots:
    void Progress();    
    void on_open_clicked();
    void on_lock_clicked();

private:
    Ui::TableWidget *ui;
    void initValue();


};

#endif // TABLEWIDGET_H
