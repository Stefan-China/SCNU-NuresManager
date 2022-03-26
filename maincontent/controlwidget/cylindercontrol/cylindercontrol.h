#ifndef FRAMECONTROL_H
#define FRAMECONTROL_H
#pragma execution_character_set("utf-8")

#include <QDebug>
#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "informatiton_patient.h"

class QLabel;
class QPushButton;
class QLabel;

class CylinderControl : public QFrame
{
    Q_OBJECT

public:
    explicit CylinderControl(QFrame *parent = 0);
    ~CylinderControl();
    void setLabelPixMap(const QPixmap &pixMap);
    void setTitleInfo(const QString &title);
    void createFrame(const QPixmap &pixMap, const QString &title,const QString &name);

private:
    QLabel *labelImage;
    QLabel *labelTitle;
    QPushButton *pushButtonDownLoad;
private:
    const int IMAGE_SIZE = 36;
    const int FIXED_WIDTH = 155;
    const int FIXED_HEIGHT = 90;
    const int BUTTON_WIDTH = 80;
    const int BUTTON_HEIGHT = 25;
public slots:
    void Button( QString title);
};

#endif // FRAMECONTROL_H
