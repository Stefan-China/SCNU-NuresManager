/********************************************************************************
** Form generated from reading UI file 'informatiton_patient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATITON_PATIENT_H
#define UI_INFORMATITON_PATIENT_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_informatiton_patient
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_3;
    QLabel *name;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Del_Btn_close;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_5;
    QGridLayout *gridLayout_2;
    QPushButton *modify;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QLabel *patient_id;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line_2;
    QPushButton *camera_modify;
    QLabel *id_card_text;
    QLabel *id_card;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *Photo;
    QLabel *name_id;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *sex;
    QLabel *birthdata;
    QLabel *phone;
    QLabel *address;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_sex;
    QTextEdit *textEdit_brith;
    QTextEdit *textEdit_telephone;
    QVBoxLayout *verticalLayout_2;
    QLabel *nationality;
    QLabel *photo_3;
    QLabel *photo_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_nationality;
    QTextEdit *textEdit_maritalStatus;
    QTextEdit *textEdit_career;
    QTextEdit *textEdit_address;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLabel *Registra_name;
    QLabel *data;
    QLabel *data_Outpatient_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Outpatient;
    QLabel *Outpatient_class;
    QLabel *label_12;
    QLabel *Outpatient_style;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLabel *doctor_name;
    QLabel *label_13;
    QLabel *chargeStatus;
    QLabel *first_visit;
    QLabel *diagnosisResult_result;
    QFrame *line;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *photo_4;
    QTextEdit *textEdit_personalHistory;
    QLabel *photo_5;
    QTextEdit *textEdit_pastHistory;
    QLabel *photo_6;
    QTextEdit *textEdit_familyHistory;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *first_visit_2;
    QLabel *label;
    QLabel *first_visit_3;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *drugcost;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *first_visit_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *first_visit_5;
    QLabel *medicalOrder_text;

    void setupUi(QWidget *informatiton_patient)
    {
        if (informatiton_patient->objectName().isEmpty())
            informatiton_patient->setObjectName(QStringLiteral("informatiton_patient"));
        informatiton_patient->resize(922, 643);
        informatiton_patient->setMinimumSize(QSize(0, 0));
        informatiton_patient->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(informatiton_patient);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget = new QWidget(informatiton_patient);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setStyleSheet(QLatin1String("QWidget#widget{border-image: url(:/image/Login_BG.png);border-radius:15px;}\n"
""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        logo = new QLabel(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMinimumSize(QSize(100, 40));
        logo->setMaximumSize(QSize(150, 40));
        logo->setAutoFillBackground(false);
        logo->setStyleSheet(QLatin1String("\n"
"background-image: url(:/image/life_ring2.png);"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/image/life_ring2.png")));
        logo->setScaledContents(true);

        horizontalLayout_6->addWidget(logo);

        horizontalSpacer_3 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QString::fromUtf8("font: 16pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_6->addWidget(name);

        horizontalSpacer_4 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

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

        horizontalLayout_6->addWidget(Del_Btn_close);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_10->addLayout(horizontalLayout_6);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setStyleSheet(QStringLiteral("background-color:rgb(131,191,195);"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        modify = new QPushButton(widget);
        modify->setObjectName(QStringLiteral("modify"));
        modify->setMinimumSize(QSize(30, 27));
        modify->setMaximumSize(QSize(30, 30));
        modify->setStyleSheet(QString::fromUtf8("\n"
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
        icon1.addFile(QStringLiteral(":/image/RegisterSuccess.png"), QSize(), QIcon::Normal, QIcon::Off);
        modify->setIcon(icon1);
        modify->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(modify, 0, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        patient_id = new QLabel(widget);
        patient_id->setObjectName(QStringLiteral("patient_id"));
        patient_id->setMinimumSize(QSize(150, 0));
        patient_id->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(patient_id, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 6, 1, 1);

        camera_modify = new QPushButton(widget);
        camera_modify->setObjectName(QStringLiteral("camera_modify"));
        camera_modify->setMinimumSize(QSize(30, 27));
        camera_modify->setMaximumSize(QSize(30, 30));
        camera_modify->setStyleSheet(QString::fromUtf8("\n"
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
        icon2.addFile(QStringLiteral(":/res/res/patient_information/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        camera_modify->setIcon(icon2);
        camera_modify->setIconSize(QSize(30, 30));

        gridLayout_2->addWidget(camera_modify, 0, 4, 1, 1);

        id_card_text = new QLabel(widget);
        id_card_text->setObjectName(QStringLiteral("id_card_text"));
        id_card_text->setMinimumSize(QSize(300, 0));
        id_card_text->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(id_card_text, 0, 8, 1, 1);

        id_card = new QLabel(widget);
        id_card->setObjectName(QStringLiteral("id_card"));
        id_card->setMinimumSize(QSize(0, 40));
        id_card->setMaximumSize(QSize(60, 50));
        id_card->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        gridLayout_2->addWidget(id_card, 0, 7, 1, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Photo = new QLabel(widget);
        Photo->setObjectName(QStringLiteral("Photo"));
        Photo->setMinimumSize(QSize(100, 0));
        Photo->setMaximumSize(QSize(100, 160));
        Photo->setScaledContents(true);

        verticalLayout_6->addWidget(Photo);

        name_id = new QLabel(widget);
        name_id->setObjectName(QStringLiteral("name_id"));
        name_id->setMaximumSize(QSize(16777215, 50));
        name_id->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_6->addWidget(name_id);


        horizontalLayout_3->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sex = new QLabel(widget);
        sex->setObjectName(QStringLiteral("sex"));
        sex->setMinimumSize(QSize(0, 40));
        sex->setMaximumSize(QSize(60, 50));
        sex->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout->addWidget(sex);

        birthdata = new QLabel(widget);
        birthdata->setObjectName(QStringLiteral("birthdata"));
        birthdata->setMinimumSize(QSize(0, 40));
        birthdata->setMaximumSize(QSize(60, 50));
        birthdata->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout->addWidget(birthdata);

        phone = new QLabel(widget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setMinimumSize(QSize(0, 40));
        phone->setMaximumSize(QSize(60, 50));
        phone->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout->addWidget(phone);

        address = new QLabel(widget);
        address->setObjectName(QStringLiteral("address"));
        address->setMinimumSize(QSize(0, 40));
        address->setMaximumSize(QSize(60, 50));
        address->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout->addWidget(address);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        textEdit_sex = new QTextEdit(widget);
        textEdit_sex->setObjectName(QStringLiteral("textEdit_sex"));
        textEdit_sex->setMinimumSize(QSize(79, 40));
        textEdit_sex->setMaximumSize(QSize(150, 50));
        textEdit_sex->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_4->addWidget(textEdit_sex);

        textEdit_brith = new QTextEdit(widget);
        textEdit_brith->setObjectName(QStringLiteral("textEdit_brith"));
        textEdit_brith->setMinimumSize(QSize(79, 40));
        textEdit_brith->setMaximumSize(QSize(150, 50));
        textEdit_brith->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_4->addWidget(textEdit_brith);

        textEdit_telephone = new QTextEdit(widget);
        textEdit_telephone->setObjectName(QStringLiteral("textEdit_telephone"));
        textEdit_telephone->setMinimumSize(QSize(79, 40));
        textEdit_telephone->setMaximumSize(QSize(150, 50));
        textEdit_telephone->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_4->addWidget(textEdit_telephone);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nationality = new QLabel(widget);
        nationality->setObjectName(QStringLiteral("nationality"));
        nationality->setMinimumSize(QSize(0, 40));
        nationality->setMaximumSize(QSize(60, 50));
        nationality->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_2->addWidget(nationality);

        photo_3 = new QLabel(widget);
        photo_3->setObjectName(QStringLiteral("photo_3"));
        photo_3->setMinimumSize(QSize(0, 40));
        photo_3->setMaximumSize(QSize(60, 50));
        photo_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_2->addWidget(photo_3);

        photo_2 = new QLabel(widget);
        photo_2->setObjectName(QStringLiteral("photo_2"));
        photo_2->setMinimumSize(QSize(0, 40));
        photo_2->setMaximumSize(QSize(60, 50));
        photo_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_2->addWidget(photo_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit_nationality = new QTextEdit(widget);
        textEdit_nationality->setObjectName(QStringLiteral("textEdit_nationality"));
        textEdit_nationality->setMinimumSize(QSize(79, 40));
        textEdit_nationality->setMaximumSize(QSize(150, 50));
        textEdit_nationality->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_3->addWidget(textEdit_nationality);

        textEdit_maritalStatus = new QTextEdit(widget);
        textEdit_maritalStatus->setObjectName(QStringLiteral("textEdit_maritalStatus"));
        textEdit_maritalStatus->setMinimumSize(QSize(79, 40));
        textEdit_maritalStatus->setMaximumSize(QSize(150, 50));
        textEdit_maritalStatus->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_3->addWidget(textEdit_maritalStatus);

        textEdit_career = new QTextEdit(widget);
        textEdit_career->setObjectName(QStringLiteral("textEdit_career"));
        textEdit_career->setMinimumSize(QSize(79, 40));
        textEdit_career->setMaximumSize(QSize(150, 50));
        textEdit_career->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_3->addWidget(textEdit_career);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout);

        textEdit_address = new QTextEdit(widget);
        textEdit_address->setObjectName(QStringLiteral("textEdit_address"));
        textEdit_address->setMaximumSize(QSize(16777215, 40));
        textEdit_address->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_5->addWidget(textEdit_address);


        horizontalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_10->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(80, 30));
        label_15->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_13->addWidget(label_15);

        Registra_name = new QLabel(widget);
        Registra_name->setObjectName(QStringLiteral("Registra_name"));
        Registra_name->setMinimumSize(QSize(80, 30));
        Registra_name->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_13->addWidget(Registra_name);

        data = new QLabel(widget);
        data->setObjectName(QStringLiteral("data"));
        data->setMinimumSize(QSize(80, 30));
        data->setMaximumSize(QSize(60, 50));
        data->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_13->addWidget(data);

        data_Outpatient_2 = new QLabel(widget);
        data_Outpatient_2->setObjectName(QStringLiteral("data_Outpatient_2"));
        data_Outpatient_2->setMinimumSize(QSize(80, 30));
        data_Outpatient_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";color: rgb(0, 0, 0);"));

        horizontalLayout_13->addWidget(data_Outpatient_2);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Outpatient = new QLabel(widget);
        Outpatient->setObjectName(QStringLiteral("Outpatient"));
        Outpatient->setMinimumSize(QSize(80, 30));
        Outpatient->setMaximumSize(QSize(60, 50));
        Outpatient->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_4->addWidget(Outpatient);

        Outpatient_class = new QLabel(widget);
        Outpatient_class->setObjectName(QStringLiteral("Outpatient_class"));
        Outpatient_class->setMinimumSize(QSize(80, 30));
        Outpatient_class->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_4->addWidget(Outpatient_class);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(80, 30));
        label_12->setMaximumSize(QSize(60, 50));
        label_12->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_4->addWidget(label_12);

        Outpatient_style = new QLabel(widget);
        Outpatient_style->setObjectName(QStringLiteral("Outpatient_style"));
        Outpatient_style->setMinimumSize(QSize(80, 30));
        Outpatient_style->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_4->addWidget(Outpatient_style);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(80, 30));
        label_10->setMaximumSize(QSize(60, 50));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_12->addWidget(label_10);

        doctor_name = new QLabel(widget);
        doctor_name->setObjectName(QStringLiteral("doctor_name"));
        doctor_name->setMinimumSize(QSize(80, 30));
        doctor_name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_12->addWidget(doctor_name);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(80, 30));
        label_13->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_12->addWidget(label_13);

        chargeStatus = new QLabel(widget);
        chargeStatus->setObjectName(QStringLiteral("chargeStatus"));
        chargeStatus->setMinimumSize(QSize(80, 30));
        chargeStatus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_12->addWidget(chargeStatus);


        verticalLayout_7->addLayout(horizontalLayout_12);

        first_visit = new QLabel(widget);
        first_visit->setObjectName(QStringLiteral("first_visit"));
        first_visit->setMinimumSize(QSize(80, 40));
        first_visit->setMaximumSize(QSize(60, 40));
        first_visit->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_7->addWidget(first_visit);

        diagnosisResult_result = new QLabel(widget);
        diagnosisResult_result->setObjectName(QStringLiteral("diagnosisResult_result"));
        diagnosisResult_result->setMinimumSize(QSize(0, 50));
        diagnosisResult_result->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";color: rgb(0, 0, 0);"));

        verticalLayout_7->addWidget(diagnosisResult_result);


        horizontalLayout_10->addLayout(verticalLayout_7);


        verticalLayout_10->addLayout(horizontalLayout_10);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        photo_4 = new QLabel(widget);
        photo_4->setObjectName(QStringLiteral("photo_4"));
        photo_4->setMinimumSize(QSize(80, 30));
        photo_4->setMaximumSize(QSize(60, 30));
        photo_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_9->addWidget(photo_4);

        textEdit_personalHistory = new QTextEdit(widget);
        textEdit_personalHistory->setObjectName(QStringLiteral("textEdit_personalHistory"));
        textEdit_personalHistory->setMinimumSize(QSize(400, 50));
        textEdit_personalHistory->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_9->addWidget(textEdit_personalHistory);

        photo_5 = new QLabel(widget);
        photo_5->setObjectName(QStringLiteral("photo_5"));
        photo_5->setMinimumSize(QSize(80, 30));
        photo_5->setMaximumSize(QSize(60, 30));
        photo_5->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_9->addWidget(photo_5);

        textEdit_pastHistory = new QTextEdit(widget);
        textEdit_pastHistory->setObjectName(QStringLiteral("textEdit_pastHistory"));
        textEdit_pastHistory->setMinimumSize(QSize(400, 50));
        textEdit_pastHistory->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_9->addWidget(textEdit_pastHistory);

        photo_6 = new QLabel(widget);
        photo_6->setObjectName(QStringLiteral("photo_6"));
        photo_6->setMinimumSize(QSize(80, 30));
        photo_6->setMaximumSize(QSize(60, 30));
        photo_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        verticalLayout_9->addWidget(photo_6);

        textEdit_familyHistory = new QTextEdit(widget);
        textEdit_familyHistory->setObjectName(QStringLiteral("textEdit_familyHistory"));
        textEdit_familyHistory->setMinimumSize(QSize(400, 50));
        textEdit_familyHistory->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        verticalLayout_9->addWidget(textEdit_familyHistory);


        horizontalLayout_11->addLayout(verticalLayout_9);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(line_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        first_visit_2 = new QLabel(widget);
        first_visit_2->setObjectName(QStringLiteral("first_visit_2"));
        first_visit_2->setMinimumSize(QSize(50, 40));
        first_visit_2->setMaximumSize(QSize(60, 40));
        first_visit_2->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_7->addWidget(first_visit_2);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(70, 0));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_7->addWidget(label);

        first_visit_3 = new QLabel(widget);
        first_visit_3->setObjectName(QStringLiteral("first_visit_3"));
        first_visit_3->setMinimumSize(QSize(50, 40));
        first_visit_3->setMaximumSize(QSize(60, 40));
        first_visit_3->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_7->addWidget(first_visit_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(70, 0));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_7->addWidget(label_6);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 40));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_7->addWidget(label_2);

        drugcost = new QLabel(widget);
        drugcost->setObjectName(QStringLiteral("drugcost"));
        drugcost->setMinimumSize(QSize(70, 0));
        drugcost->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_7->addWidget(drugcost);


        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        first_visit_4 = new QLabel(widget);
        first_visit_4->setObjectName(QStringLiteral("first_visit_4"));
        first_visit_4->setMinimumSize(QSize(50, 40));
        first_visit_4->setMaximumSize(QSize(60, 40));
        first_visit_4->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_8->addWidget(first_visit_4);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_8->addWidget(label_8);


        verticalLayout_8->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        first_visit_5 = new QLabel(widget);
        first_visit_5->setObjectName(QStringLiteral("first_visit_5"));
        first_visit_5->setMinimumSize(QSize(50, 40));
        first_visit_5->setMaximumSize(QSize(60, 50));
        first_visit_5->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";\n"
""));

        horizontalLayout_9->addWidget(first_visit_5);

        medicalOrder_text = new QLabel(widget);
        medicalOrder_text->setObjectName(QStringLiteral("medicalOrder_text"));
        medicalOrder_text->setMinimumSize(QSize(0, 120));
        medicalOrder_text->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 10pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_9->addWidget(medicalOrder_text);


        verticalLayout_8->addLayout(horizontalLayout_9);


        horizontalLayout_11->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout_10, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(informatiton_patient);

        QMetaObject::connectSlotsByName(informatiton_patient);
    } // setupUi

    void retranslateUi(QWidget *informatiton_patient)
    {
        informatiton_patient->setWindowTitle(QApplication::translate("informatiton_patient", "Form", Q_NULLPTR));
        logo->setText(QString());
        name->setText(QApplication::translate("informatiton_patient", "\346\202\243\350\200\205\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        Del_Btn_close->setText(QString());
        modify->setText(QString());
        label_7->setText(QApplication::translate("informatiton_patient", "\347\227\205\345\216\206\345\217\267", Q_NULLPTR));
        patient_id->setText(QString());
        camera_modify->setText(QString());
        id_card_text->setText(QApplication::translate("informatiton_patient", "xxxx", Q_NULLPTR));
        id_card->setText(QApplication::translate("informatiton_patient", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        Photo->setText(QString());
        name_id->setText(QString());
        sex->setText(QApplication::translate("informatiton_patient", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        birthdata->setText(QApplication::translate("informatiton_patient", "\347\224\237\346\227\245\357\274\232", Q_NULLPTR));
        phone->setText(QApplication::translate("informatiton_patient", "\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        address->setText(QApplication::translate("informatiton_patient", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        nationality->setText(QApplication::translate("informatiton_patient", "\346\260\221\346\227\217\357\274\232", Q_NULLPTR));
        photo_3->setText(QApplication::translate("informatiton_patient", "\345\251\232\345\247\273\357\274\232", Q_NULLPTR));
        photo_2->setText(QApplication::translate("informatiton_patient", "\350\201\214\344\270\232\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("informatiton_patient", "\346\214\202\345\217\267\345\221\230\357\274\232", Q_NULLPTR));
        Registra_name->setText(QString());
        data->setText(QApplication::translate("informatiton_patient", "\345\260\261\350\257\212\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        data_Outpatient_2->setText(QString());
        Outpatient->setText(QApplication::translate("informatiton_patient", "\347\247\221\345\256\244\357\274\232", Q_NULLPTR));
        Outpatient_class->setText(QString());
        label_12->setText(QApplication::translate("informatiton_patient", "\351\227\250\350\257\212\347\261\273\345\236\213", Q_NULLPTR));
        Outpatient_style->setText(QString());
        label_10->setText(QApplication::translate("informatiton_patient", "\345\214\273\347\224\237\357\274\232", Q_NULLPTR));
        doctor_name->setText(QString());
        label_13->setText(QApplication::translate("informatiton_patient", "\346\224\266\350\264\271\347\212\266\346\200\201", Q_NULLPTR));
        chargeStatus->setText(QString());
        first_visit->setText(QApplication::translate("informatiton_patient", "\345\210\235\346\255\245\350\257\212\346\226\255\357\274\232", Q_NULLPTR));
        diagnosisResult_result->setText(QApplication::translate("informatiton_patient", "TextLabel", Q_NULLPTR));
        photo_4->setText(QApplication::translate("informatiton_patient", "\344\270\252\344\272\272\345\216\206\345\217\262", Q_NULLPTR));
        photo_5->setText(QApplication::translate("informatiton_patient", "\346\227\242\345\276\200\347\227\205\345\217\262", Q_NULLPTR));
        photo_6->setText(QApplication::translate("informatiton_patient", "\345\256\266\346\227\217\347\227\205\345\217\262", Q_NULLPTR));
        first_visit_2->setText(QApplication::translate("informatiton_patient", "\350\215\257\345\223\201", Q_NULLPTR));
        label->setText(QString());
        first_visit_3->setText(QApplication::translate("informatiton_patient", "\350\247\204\346\240\274", Q_NULLPTR));
        label_6->setText(QString());
        label_2->setText(QApplication::translate("informatiton_patient", "\350\264\271\347\224\250", Q_NULLPTR));
        drugcost->setText(QString());
        first_visit_4->setText(QApplication::translate("informatiton_patient", "\347\224\250\346\263\225", Q_NULLPTR));
        label_8->setText(QString());
        first_visit_5->setText(QApplication::translate("informatiton_patient", "\345\214\273\345\230\261", Q_NULLPTR));
        medicalOrder_text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class informatiton_patient: public Ui_informatiton_patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATITON_PATIENT_H
