/********************************************************************************
** Form generated from reading UI file 'framewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEWIDGET_H
#define UI_FRAMEWIDGET_H

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

QT_BEGIN_NAMESPACE

class Ui_FrameWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *turn_btn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    QPushButton *smart_pre_visits_btn;
    QPushButton *smart_autognosis_btn;
    QPushButton *smart_hospital_guide_btn;
    QPushButton *smart_ask_medicine_btn;
    QPushButton *smart_qus_ans_btn;

    void setupUi(QWidget *FrameWidget)
    {
        if (FrameWidget->objectName().isEmpty())
            FrameWidget->setObjectName(QStringLiteral("FrameWidget"));
        FrameWidget->resize(839, 605);
        FrameWidget->setAutoFillBackground(false);
        FrameWidget->setStyleSheet(QLatin1String("\n"
"border-image: url(:/res/res/medical_image/introduce/bg.png);"));
        gridLayout = new QGridLayout(FrameWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(FrameWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        turn_btn = new QPushButton(widget);
        turn_btn->setObjectName(QStringLiteral("turn_btn"));
        turn_btn->setMinimumSize(QSize(100, 30));
        turn_btn->setMaximumSize(QSize(100, 30));
        turn_btn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image: url(:/res/res/medical_image/introduce/turn_top.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image: url(:/res/res/medical_image/introduce/turn_hover.png);\n"
"}"));

        horizontalLayout_2->addWidget(turn_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 300));
        label->setStyleSheet(QStringLiteral("border-image: url(:/res/res/medical_image/introduce/bg_1.png);"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(450, 350));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/res/res/medical_image/introduce/bg_2.png);"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        smart_pre_visits_btn = new QPushButton(widget);
        smart_pre_visits_btn->setObjectName(QStringLiteral("smart_pre_visits_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(smart_pre_visits_btn->sizePolicy().hasHeightForWidth());
        smart_pre_visits_btn->setSizePolicy(sizePolicy1);
        smart_pre_visits_btn->setMinimumSize(QSize(0, 200));
        smart_pre_visits_btn->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton{\n"
"border-image: url(:/res/res/medical_image/smart_pre_visits.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image: url(:/res/res/medical_image/smart_pre_visits_hover.png);\n"
"}"));

        gridLayout_4->addWidget(smart_pre_visits_btn, 0, 0, 1, 1);

        smart_autognosis_btn = new QPushButton(widget);
        smart_autognosis_btn->setObjectName(QStringLiteral("smart_autognosis_btn"));
        sizePolicy1.setHeightForWidth(smart_autognosis_btn->sizePolicy().hasHeightForWidth());
        smart_autognosis_btn->setSizePolicy(sizePolicy1);
        smart_autognosis_btn->setMinimumSize(QSize(0, 200));
        smart_autognosis_btn->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"border-image: url(:/res/res/medical_image/smart_autognosis.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image: url(:/res/res/medical_image/smart_autognosis_hover.png);\n"
"}"));

        gridLayout_4->addWidget(smart_autognosis_btn, 0, 1, 1, 1);

        smart_hospital_guide_btn = new QPushButton(widget);
        smart_hospital_guide_btn->setObjectName(QStringLiteral("smart_hospital_guide_btn"));
        sizePolicy1.setHeightForWidth(smart_hospital_guide_btn->sizePolicy().hasHeightForWidth());
        smart_hospital_guide_btn->setSizePolicy(sizePolicy1);
        smart_hospital_guide_btn->setMinimumSize(QSize(0, 200));
        smart_hospital_guide_btn->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"border-image: url(:/res/res/medical_image/smart_hospital_guide.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image: url(:/res/res/medical_image/smart_hospital_guide_hover.png);\n"
"}"));

        gridLayout_4->addWidget(smart_hospital_guide_btn, 0, 2, 1, 1);

        smart_ask_medicine_btn = new QPushButton(widget);
        smart_ask_medicine_btn->setObjectName(QStringLiteral("smart_ask_medicine_btn"));
        sizePolicy1.setHeightForWidth(smart_ask_medicine_btn->sizePolicy().hasHeightForWidth());
        smart_ask_medicine_btn->setSizePolicy(sizePolicy1);
        smart_ask_medicine_btn->setMinimumSize(QSize(0, 200));
        smart_ask_medicine_btn->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"border-image: url(:/res/res/medical_image/smart_ask_medicine.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image: url(:/res/res/medical_image/smart_ask_medicine_hover.png);\n"
"}"));

        gridLayout_4->addWidget(smart_ask_medicine_btn, 0, 3, 1, 1);

        smart_qus_ans_btn = new QPushButton(widget);
        smart_qus_ans_btn->setObjectName(QStringLiteral("smart_qus_ans_btn"));
        sizePolicy1.setHeightForWidth(smart_qus_ans_btn->sizePolicy().hasHeightForWidth());
        smart_qus_ans_btn->setSizePolicy(sizePolicy1);
        smart_qus_ans_btn->setMinimumSize(QSize(0, 200));
        smart_qus_ans_btn->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"border-image: url(:/res/res/medical_image/smart_qus_ans.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image: url(:/res/res/medical_image/smart_qus_ans_hover.png);\n"
"}"));

        gridLayout_4->addWidget(smart_qus_ans_btn, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(FrameWidget);

        QMetaObject::connectSlotsByName(FrameWidget);
    } // setupUi

    void retranslateUi(QWidget *FrameWidget)
    {
        FrameWidget->setWindowTitle(QApplication::translate("FrameWidget", "Form", Q_NULLPTR));
        turn_btn->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        smart_pre_visits_btn->setText(QString());
        smart_autognosis_btn->setText(QString());
        smart_hospital_guide_btn->setText(QString());
        smart_ask_medicine_btn->setText(QString());
        smart_qus_ans_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FrameWidget: public Ui_FrameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEWIDGET_H
