/********************************************************************************
** Form generated from reading UI file 'introduce_ai.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_AI_H
#define UI_INTRODUCE_AI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_introduce_ai
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_4;
    QLabel *name;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Del_Btn_close;
    QSpacerItem *horizontalSpacer_6;
    QWebEngineView *medical_widget;

    void setupUi(QWidget *introduce_ai)
    {
        if (introduce_ai->objectName().isEmpty())
            introduce_ai->setObjectName(QStringLiteral("introduce_ai"));
        introduce_ai->resize(880, 559);
        gridLayout = new QGridLayout(introduce_ai);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(introduce_ai);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 500));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/res/res/medical_image/introduce/bg.png);"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        logo = new QLabel(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMinimumSize(QSize(0, 40));
        logo->setMaximumSize(QSize(200, 40));
        logo->setAutoFillBackground(false);
        logo->setStyleSheet(QLatin1String("\n"
"background-image: url(:/image/life_ring2.png);"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/image/life_ring2.png")));
        logo->setScaledContents(true);

        horizontalLayout->addWidget(logo);

        horizontalSpacer_4 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));
        name->setMinimumSize(QSize(0, 20));
        name->setStyleSheet(QString::fromUtf8("font: 16pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(name);

        horizontalSpacer_5 = new QSpacerItem(320, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        Del_Btn_close = new QPushButton(widget);
        Del_Btn_close->setObjectName(QStringLiteral("Del_Btn_close"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Del_Btn_close->sizePolicy().hasHeightForWidth());
        Del_Btn_close->setSizePolicy(sizePolicy);
        Del_Btn_close->setMinimumSize(QSize(20, 20));
        Del_Btn_close->setMaximumSize(QSize(20, 20));
        Del_Btn_close->setAutoFillBackground(false);
        Del_Btn_close->setStyleSheet(QLatin1String("\n"
"background-color:rgb(131,191,195);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/btn_Max_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        Del_Btn_close->setIcon(icon);

        horizontalLayout->addWidget(Del_Btn_close);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        medical_widget = new QWebEngineView(widget);
        medical_widget->setObjectName(QStringLiteral("medical_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(medical_widget->sizePolicy().hasHeightForWidth());
        medical_widget->setSizePolicy(sizePolicy1);
        medical_widget->setMinimumSize(QSize(0, 450));

        gridLayout_3->addWidget(medical_widget, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(introduce_ai);

        QMetaObject::connectSlotsByName(introduce_ai);
    } // setupUi

    void retranslateUi(QWidget *introduce_ai)
    {
        introduce_ai->setWindowTitle(QApplication::translate("introduce_ai", "Form", Q_NULLPTR));
        logo->setText(QString());
        name->setText(QApplication::translate("introduce_ai", "AI\345\214\273\347\226\227\351\227\256\347\255\224", Q_NULLPTR));
        Del_Btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class introduce_ai: public Ui_introduce_ai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_AI_H
