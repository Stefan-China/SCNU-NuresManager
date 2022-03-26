/********************************************************************************
** Form generated from reading UI file 'forgetpassword_1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_1_H
#define UI_FORGETPASSWORD_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <mylineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword_1
{
public:
    QPushButton *btn_MinR;
    QLabel *label_picLoveR;
    QPushButton *btn_SubmitF1;
    QPushButton *btn_CloseR;
    MyLineEdit *lineEdit_oldpassword;
    MyLineEdit *lineEdit_Email;
    QLabel *label_2R;
    QLabel *label_errRF1;
    MyLineEdit *lineEdit_Password_new;
    MyLineEdit *lineEdit_Password_check;
    QPushButton *btn_Change1;
    QPushButton *btn_Change2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;

    void setupUi(QWidget *ForgetPassword_1)
    {
        if (ForgetPassword_1->objectName().isEmpty())
            ForgetPassword_1->setObjectName(QStringLiteral("ForgetPassword_1"));
        ForgetPassword_1->resize(911, 484);
        ForgetPassword_1->setStyleSheet(QLatin1String("QWidget#ForgetPassword_1{\n"
"border-radius:10px;\n"
"}"));
        btn_MinR = new QPushButton(ForgetPassword_1);
        btn_MinR->setObjectName(QStringLiteral("btn_MinR"));
        btn_MinR->setGeometry(QRect(820, 17, 35, 35));
        btn_MinR->setFocusPolicy(Qt::NoFocus);
        btn_MinR->setStyleSheet(QLatin1String("QPushButton#btn_MinR\n"
"{\n"
"     border-image:url(:/image/Min01.png);\n"
"}\n"
"QPushButton:hover#btn_MinR\n"
"{\n"
"     border-image:url(:/image/Min_hover.png);\n"
"}"));
        label_picLoveR = new QLabel(ForgetPassword_1);
        label_picLoveR->setObjectName(QStringLiteral("label_picLoveR"));
        label_picLoveR->setGeometry(QRect(36, 26, 220, 55));
        label_picLoveR->setMinimumSize(QSize(220, 55));
        label_picLoveR->setStyleSheet(QStringLiteral("border-image: url(:/image/life_ring2.png);"));
        btn_SubmitF1 = new QPushButton(ForgetPassword_1);
        btn_SubmitF1->setObjectName(QStringLiteral("btn_SubmitF1"));
        btn_SubmitF1->setGeometry(QRect(509, 390, 317, 48));
        QFont font;
        btn_SubmitF1->setFont(font);
        btn_SubmitF1->setFocusPolicy(Qt::TabFocus);
        btn_SubmitF1->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size:24px;\n"
"}\n"
"QPushButton:hover#btn_SubmitF1{\n"
"background-color:#A9E2F3;\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_SubmitF1{\n"
"background-color:#58ACFA;\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        btn_CloseR = new QPushButton(ForgetPassword_1);
        btn_CloseR->setObjectName(QStringLiteral("btn_CloseR"));
        btn_CloseR->setGeometry(QRect(858, 17, 35, 35));
        btn_CloseR->setFocusPolicy(Qt::NoFocus);
        btn_CloseR->setStyleSheet(QLatin1String("QPushButton#btn_CloseR\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_CloseR\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        lineEdit_oldpassword = new MyLineEdit(ForgetPassword_1);
        lineEdit_oldpassword->setObjectName(QStringLiteral("lineEdit_oldpassword"));
        lineEdit_oldpassword->setGeometry(QRect(520, 310, 317, 45));
        lineEdit_oldpassword->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_oldpassword{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_oldpassword{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        lineEdit_Email = new MyLineEdit(ForgetPassword_1);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(520, 190, 317, 45));
        lineEdit_Email->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_Email{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_Email{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_2R = new QLabel(ForgetPassword_1);
        label_2R->setObjectName(QStringLiteral("label_2R"));
        label_2R->setGeometry(QRect(518, 90, 131, 27));
        label_2R->setFont(font);
        label_2R->setStyleSheet(QLatin1String("font-size:27px;\n"
"color: rgb(110, 110, 110);"));
        label_errRF1 = new QLabel(ForgetPassword_1);
        label_errRF1->setObjectName(QStringLiteral("label_errRF1"));
        label_errRF1->setGeometry(QRect(518, 138, 250, 31));
        label_errRF1->setFont(font);
        label_errRF1->setStyleSheet(QLatin1String("font-size:16px;\n"
"color: rgb(251, 173, 88);"));
        lineEdit_Password_new = new MyLineEdit(ForgetPassword_1);
        lineEdit_Password_new->setObjectName(QStringLiteral("lineEdit_Password_new"));
        lineEdit_Password_new->setGeometry(QRect(520, 230, 317, 45));
        lineEdit_Password_new->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_Password_new{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_Password_new{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        lineEdit_Password_check = new MyLineEdit(ForgetPassword_1);
        lineEdit_Password_check->setObjectName(QStringLiteral("lineEdit_Password_check"));
        lineEdit_Password_check->setGeometry(QRect(520, 270, 317, 45));
        lineEdit_Password_check->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_Password_check{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_Password_check{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        btn_Change1 = new QPushButton(ForgetPassword_1);
        btn_Change1->setObjectName(QStringLiteral("btn_Change1"));
        btn_Change1->setGeometry(QRect(790, 230, 40, 41));
        btn_Change1->setIconSize(QSize(32, 32));
        btn_Change2 = new QPushButton(ForgetPassword_1);
        btn_Change2->setObjectName(QStringLiteral("btn_Change2"));
        btn_Change2->setGeometry(QRect(790, 270, 40, 41));
        btn_Change2->setIconSize(QSize(32, 32));
        label_2 = new QLabel(ForgetPassword_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 177, 100, 45));
        label_2->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ForgetPassword_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 267, 100, 45));
        label_3->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ForgetPassword_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 312, 100, 45));
        label->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(ForgetPassword_1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 222, 100, 45));
        label_4->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_MinR->raise();
        label_picLoveR->raise();
        btn_SubmitF1->raise();
        btn_CloseR->raise();
        lineEdit_oldpassword->raise();
        lineEdit_Email->raise();
        label_2R->raise();
        label_errRF1->raise();
        lineEdit_Password_new->raise();
        lineEdit_Password_check->raise();
        label_2->raise();
        label_3->raise();
        label->raise();
        label_4->raise();
        btn_Change1->raise();
        btn_Change2->raise();
        QWidget::setTabOrder(lineEdit_Email, lineEdit_Password_new);
        QWidget::setTabOrder(lineEdit_Password_new, lineEdit_Password_check);
        QWidget::setTabOrder(lineEdit_Password_check, lineEdit_oldpassword);
        QWidget::setTabOrder(lineEdit_oldpassword, btn_SubmitF1);

        retranslateUi(ForgetPassword_1);

        QMetaObject::connectSlotsByName(ForgetPassword_1);
    } // setupUi

    void retranslateUi(QWidget *ForgetPassword_1)
    {
        ForgetPassword_1->setWindowTitle(QApplication::translate("ForgetPassword_1", "Form", Q_NULLPTR));
        btn_MinR->setText(QString());
        label_picLoveR->setText(QString());
        btn_SubmitF1->setText(QApplication::translate("ForgetPassword_1", "\346\217\220\344\272\244\347\224\263\350\257\267", Q_NULLPTR));
        btn_CloseR->setText(QString());
        lineEdit_oldpassword->setText(QString());
        lineEdit_Email->setText(QString());
        label_2R->setText(QApplication::translate("ForgetPassword_1", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        label_errRF1->setText(QString());
        lineEdit_Password_new->setText(QString());
        lineEdit_Password_check->setText(QString());
        btn_Change1->setText(QString());
        btn_Change2->setText(QString());
        label_2->setText(QApplication::translate("ForgetPassword_1", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("ForgetPassword_1", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("ForgetPassword_1", "\346\227\247\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("ForgetPassword_1", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword_1: public Ui_ForgetPassword_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_1_H
