/********************************************************************************
** Form generated from reading UI file 'maintitlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTITLEBAR_H
#define UI_MAINTITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTitleBar
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frameBorder;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *bluetooth;
    QLabel *labelImage;
    QSpacerItem *zhong;
    QCheckBox *openPort;
    QLabel *labelTitleName;
    QLabel *headbattery;
    QComboBox *portName;
    QLabel *handbattery;
    QPushButton *pushButtonMin;
    QPushButton *pushButtonNormalMax;
    QPushButton *pushButtonClose;
    QLabel *user_name;

    void setupUi(QWidget *MainTitleBar)
    {
        if (MainTitleBar->objectName().isEmpty())
            MainTitleBar->setObjectName(QStringLiteral("MainTitleBar"));
        MainTitleBar->resize(900, 55);
        MainTitleBar->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(MainTitleBar);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frameBorder = new QFrame(MainTitleBar);
        frameBorder->setObjectName(QStringLiteral("frameBorder"));
        frameBorder->setStyleSheet(QStringLiteral(""));
        frameBorder->setFrameShape(QFrame::StyledPanel);
        frameBorder->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameBorder);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(frameBorder);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        bluetooth = new QLabel(frameBorder);
        bluetooth->setObjectName(QStringLiteral("bluetooth"));
        bluetooth->setMinimumSize(QSize(30, 30));
        bluetooth->setMaximumSize(QSize(30, 30));
        bluetooth->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/bluetooth/bluetooth_off.png")));
        bluetooth->setScaledContents(true);

        gridLayout->addWidget(bluetooth, 0, 7, 1, 1);

        labelImage = new QLabel(frameBorder);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setMinimumSize(QSize(30, 30));
        labelImage->setMaximumSize(QSize(30, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelImage->setFont(font);
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage->setScaledContents(true);

        gridLayout->addWidget(labelImage, 0, 1, 1, 1);

        zhong = new QSpacerItem(492, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(zhong, 0, 3, 1, 1);

        openPort = new QCheckBox(frameBorder);
        openPort->setObjectName(QStringLiteral("openPort"));
        openPort->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(openPort, 0, 5, 1, 1);

        labelTitleName = new QLabel(frameBorder);
        labelTitleName->setObjectName(QStringLiteral("labelTitleName"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        labelTitleName->setFont(font1);
        labelTitleName->setStyleSheet(QStringLiteral(""));
        labelTitleName->setScaledContents(true);

        gridLayout->addWidget(labelTitleName, 0, 0, 1, 1);

        headbattery = new QLabel(frameBorder);
        headbattery->setObjectName(QStringLiteral("headbattery"));
        headbattery->setMinimumSize(QSize(30, 30));
        headbattery->setMaximumSize(QSize(30, 30));
        headbattery->setFont(font1);
        headbattery->setScaledContents(true);

        gridLayout->addWidget(headbattery, 0, 8, 1, 1);

        portName = new QComboBox(frameBorder);
        portName->setObjectName(QStringLiteral("portName"));
        portName->setMinimumSize(QSize(0, 20));
        portName->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));

        gridLayout->addWidget(portName, 0, 6, 1, 1);

        handbattery = new QLabel(frameBorder);
        handbattery->setObjectName(QStringLiteral("handbattery"));
        handbattery->setMinimumSize(QSize(30, 30));
        handbattery->setMaximumSize(QSize(30, 30));
        handbattery->setFont(font1);
        handbattery->setScaledContents(true);

        gridLayout->addWidget(handbattery, 0, 9, 1, 1);

        pushButtonMin = new QPushButton(frameBorder);
        pushButtonMin->setObjectName(QStringLiteral("pushButtonMin"));
        pushButtonMin->setMinimumSize(QSize(20, 20));
        pushButtonMin->setMaximumSize(QSize(20, 20));
        QFont font2;
        font2.setPointSize(6);
        pushButtonMin->setFont(font2);
        pushButtonMin->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pushButtonMin, 0, 10, 1, 1);

        pushButtonNormalMax = new QPushButton(frameBorder);
        pushButtonNormalMax->setObjectName(QStringLiteral("pushButtonNormalMax"));
        pushButtonNormalMax->setMinimumSize(QSize(20, 20));
        pushButtonNormalMax->setMaximumSize(QSize(20, 20));
        pushButtonNormalMax->setFont(font2);
        pushButtonNormalMax->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pushButtonNormalMax, 0, 11, 1, 1);

        pushButtonClose = new QPushButton(frameBorder);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(20, 20));
        pushButtonClose->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(pushButtonClose, 0, 12, 1, 1);

        user_name = new QLabel(frameBorder);
        user_name->setObjectName(QStringLiteral("user_name"));
        user_name->setStyleSheet(QString::fromUtf8("font: 14pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        gridLayout->addWidget(user_name, 0, 4, 1, 1);


        gridLayout_2->addWidget(frameBorder, 0, 0, 1, 1);


        retranslateUi(MainTitleBar);

        QMetaObject::connectSlotsByName(MainTitleBar);
    } // setupUi

    void retranslateUi(QWidget *MainTitleBar)
    {
        MainTitleBar->setWindowTitle(QApplication::translate("MainTitleBar", "Form", Q_NULLPTR));
        label->setText(QString());
        bluetooth->setText(QString());
        labelImage->setText(QString());
        openPort->setText(QString());
        labelTitleName->setText(QApplication::translate("MainTitleBar", "SCNU-Smart-Ward", Q_NULLPTR));
        headbattery->setText(QApplication::translate("MainTitleBar", "1", Q_NULLPTR));
        handbattery->setText(QApplication::translate("MainTitleBar", "2", Q_NULLPTR));
        pushButtonMin->setText(QString());
        pushButtonNormalMax->setText(QString());
        pushButtonClose->setText(QString());
        user_name->setText(QApplication::translate("MainTitleBar", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainTitleBar: public Ui_MainTitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTITLEBAR_H
