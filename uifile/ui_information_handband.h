/********************************************************************************
** Form generated from reading UI file 'information_handband.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_HANDBAND_H
#define UI_INFORMATION_HANDBAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information_handband
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *name;
    QPushButton *Btn_close;
    QWidget *widgetFirst;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *Heartbeat;
    QLabel *label;
    QLabel *temperature;
    QLabel *label_2;
    QLabel *Diastolic;
    QLabel *label_3;
    QLabel *Steps;
    QLabel *label_4;
    QLabel *label_29;
    QLabel *label_11;

    void setupUi(QWidget *information_handband)
    {
        if (information_handband->objectName().isEmpty())
            information_handband->setObjectName(QStringLiteral("information_handband"));
        information_handband->resize(400, 300);
        gridLayout_4 = new QGridLayout(information_handband);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widget = new QWidget(information_handband);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        logo = new QLabel(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMinimumSize(QSize(100, 40));
        logo->setMaximumSize(QSize(150, 40));
        logo->setAutoFillBackground(false);
        logo->setStyleSheet(QLatin1String("\n"
"background-image: url(:/image/life_ring2.png);"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/image/life_ring2.png")));
        logo->setScaledContents(true);

        gridLayout->addWidget(logo, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 5, 1, 1);

        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QString::fromUtf8("font: 16pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        gridLayout->addWidget(name, 0, 2, 1, 1);

        Btn_close = new QPushButton(widget);
        Btn_close->setObjectName(QStringLiteral("Btn_close"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Btn_close->sizePolicy().hasHeightForWidth());
        Btn_close->setSizePolicy(sizePolicy);
        Btn_close->setMinimumSize(QSize(20, 20));
        Btn_close->setMaximumSize(QSize(20, 20));
        Btn_close->setAutoFillBackground(false);
        Btn_close->setStyleSheet(QLatin1String("\n"
"background-color:rgb(131,191,195);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/btn_Max_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn_close->setIcon(icon);

        gridLayout->addWidget(Btn_close, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        widgetFirst = new QWidget(widget);
        widgetFirst->setObjectName(QStringLiteral("widgetFirst"));
        widgetFirst->setStyleSheet(QLatin1String("QFrame #widgetFirst\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_3 = new QGridLayout(widgetFirst);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(widgetFirst);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(80, 50));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/ward_bed.png")));
        label_6->setScaledContents(true);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(widgetFirst);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        Heartbeat = new QLabel(widgetFirst);
        Heartbeat->setObjectName(QStringLiteral("Heartbeat"));
        Heartbeat->setMaximumSize(QSize(100, 16777215));
        Heartbeat->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(Heartbeat, 1, 1, 1, 1, Qt::AlignHCenter);

        label = new QLabel(widgetFirst);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(80, 80));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\345\277\203\347\216\207.png")));
        label->setScaledContents(true);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        temperature = new QLabel(widgetFirst);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setMaximumSize(QSize(100, 16777215));
        temperature->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(temperature, 1, 3, 1, 1, Qt::AlignHCenter);

        label_2 = new QLabel(widgetFirst);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\270\251\345\272\246\350\256\241.png")));
        label_2->setScaledContents(true);

        gridLayout_3->addWidget(label_2, 1, 2, 1, 1);

        Diastolic = new QLabel(widgetFirst);
        Diastolic->setObjectName(QStringLiteral("Diastolic"));
        Diastolic->setMaximumSize(QSize(100, 16777215));
        Diastolic->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(Diastolic, 2, 1, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(widgetFirst);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(80, 80));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\350\241\200\345\216\213\344\273\252.png")));
        label_3->setScaledContents(true);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        Steps = new QLabel(widgetFirst);
        Steps->setObjectName(QStringLiteral("Steps"));
        Steps->setMaximumSize(QSize(100, 16777215));
        Steps->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(Steps, 2, 3, 1, 1, Qt::AlignHCenter);

        label_4 = new QLabel(widgetFirst);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\255\245\346\225\260.png")));
        label_4->setScaledContents(true);

        gridLayout_3->addWidget(label_4, 2, 2, 1, 1);

        label_29 = new QLabel(widgetFirst);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(60, 60));
        label_29->setMaximumSize(QSize(60, 60));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        label_29->setScaledContents(true);

        gridLayout_3->addWidget(label_29, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_11 = new QLabel(widgetFirst);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_3->addWidget(label_11, 0, 3, 1, 1);


        gridLayout_2->addWidget(widgetFirst, 1, 0, 1, 1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(information_handband);

        QMetaObject::connectSlotsByName(information_handband);
    } // setupUi

    void retranslateUi(QWidget *information_handband)
    {
        information_handband->setWindowTitle(QApplication::translate("information_handband", "Form", Q_NULLPTR));
        logo->setText(QString());
        name->setText(QApplication::translate("information_handband", "\346\202\243\350\200\205\347\224\237\347\220\206\344\277\241\346\201\257", Q_NULLPTR));
        Btn_close->setText(QString());
        label_6->setText(QString());
        label_5->setText(QApplication::translate("information_handband", "SCNU-Ward", Q_NULLPTR));
        Heartbeat->setText(QApplication::translate("information_handband", "TextLabel", Q_NULLPTR));
        label->setText(QString());
        temperature->setText(QApplication::translate("information_handband", "temperature", Q_NULLPTR));
        label_2->setText(QString());
        Diastolic->setText(QApplication::translate("information_handband", "TextLabel", Q_NULLPTR));
        label_3->setText(QString());
        Steps->setText(QApplication::translate("information_handband", "TextLabel", Q_NULLPTR));
        label_4->setText(QString());
        label_29->setText(QString());
        label_11->setText(QApplication::translate("information_handband", "Patient001", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class information_handband: public Ui_information_handband {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_HANDBAND_H
