/********************************************************************************
** Form generated from reading UI file 'cylinderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYLINDERWIDGET_H
#define UI_CYLINDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CylinderWidget
{
public:
    QGridLayout *gridLayout_19;
    QFrame *frameBackground_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit_id;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *CylinderWidget)
    {
        if (CylinderWidget->objectName().isEmpty())
            CylinderWidget->setObjectName(QStringLiteral("CylinderWidget"));
        CylinderWidget->resize(989, 467);
        CylinderWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_19 = new QGridLayout(CylinderWidget);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        frameBackground_2 = new QFrame(CylinderWidget);
        frameBackground_2->setObjectName(QStringLiteral("frameBackground_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameBackground_2->sizePolicy().hasHeightForWidth());
        frameBackground_2->setSizePolicy(sizePolicy);
        frameBackground_2->setFrameShape(QFrame::StyledPanel);
        frameBackground_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameBackground_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frameBackground_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout->addWidget(label);

        textEdit_id = new QTextEdit(frameBackground_2);
        textEdit_id->setObjectName(QStringLiteral("textEdit_id"));
        sizePolicy.setHeightForWidth(textEdit_id->sizePolicy().hasHeightForWidth());
        textEdit_id->setSizePolicy(sizePolicy);
        textEdit_id->setMinimumSize(QSize(0, 20));
        textEdit_id->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(textEdit_id);

        pushButton_3 = new QPushButton(frameBackground_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(20, 27));
        pushButton_3->setMaximumSize(QSize(30, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/res/patient_information/explore.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(frameBackground_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 27));
        pushButton_2->setMaximumSize(QSize(30, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/res/patient_information/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refresh = new QPushButton(frameBackground_2);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setMaximumSize(QSize(30, 30));
        refresh->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/res/patient_information/reflesh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon2);
        refresh->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(refresh);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        scrollArea = new QScrollArea(frameBackground_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 920, 800));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 800));
        scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 16777215));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 11pt \"\345\256\213\344\275\223\";\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"background-color:#1874CD;\n"
"font-size:12px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(0, 0, 0);\n"
"border-radius:5px;\n"
"color: rgb(0, 0, 0);\n"
"background-color:#1C86EE;\n"
"}\n"
"QWidget#scrollAreaWidgetContents\n"
"{\n"
"\n"
"background:transparent;border:1px solid rgb(170, 255, 255);\n"
"background-color: #F5FBFF;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);


        gridLayout_19->addWidget(frameBackground_2, 0, 0, 1, 1);


        retranslateUi(CylinderWidget);

        QMetaObject::connectSlotsByName(CylinderWidget);
    } // setupUi

    void retranslateUi(QWidget *CylinderWidget)
    {
        CylinderWidget->setWindowTitle(QApplication::translate("CylinderWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CylinderWidget", "\347\227\205\344\272\272ID\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CylinderWidget: public Ui_CylinderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYLINDERWIDGET_H
