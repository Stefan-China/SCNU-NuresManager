/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_4;
    QLabel *name;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Del_Btn_close;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *cameraCBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cameraBtn;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *cameraView;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *clearImgBtn;
    QLabel *imgShowLabel;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *savePathLEdit;
    QPushButton *choosePathBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *captureBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *openImgBtn;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(863, 622);
        centralwidget = new QWidget(Camera);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("QWidget#centralwidget{border-image: url(:/image/Login_BG.png);border-radius:15px;Antialiasing}\n"
""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMaximumSize(QSize(200, 40));
        logo->setAutoFillBackground(false);
        logo->setStyleSheet(QLatin1String("\n"
"background-image: url(:/image/life_ring2.png);"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/image/life_ring2.png")));
        logo->setScaledContents(true);

        horizontalLayout_6->addWidget(logo);

        horizontalSpacer_4 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QString::fromUtf8("font: 16pt \"\347\231\276\345\272\246\347\273\274\350\211\272\347\256\200\344\275\223\";"));

        horizontalLayout_6->addWidget(name);

        horizontalSpacer_5 = new QSpacerItem(320, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        Del_Btn_close = new QPushButton(centralwidget);
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

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_6);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setStyleSheet(QStringLiteral("background-color:rgb(131,191,195);"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMinimumSize(QSize(0, 10));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label);

        cameraCBox = new QComboBox(centralwidget);
        cameraCBox->setObjectName(QStringLiteral("cameraCBox"));
        cameraCBox->setMinimumSize(QSize(200, 0));
        cameraCBox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(cameraCBox);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        cameraBtn = new QPushButton(centralwidget);
        cameraBtn->setObjectName(QStringLiteral("cameraBtn"));
        cameraBtn->setMinimumSize(QSize(80, 30));
        cameraBtn->setMaximumSize(QSize(80, 30));

        horizontalLayout_4->addWidget(cameraBtn);


        verticalLayout_2->addLayout(horizontalLayout_4);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(450, 450));
        frame->setMaximumSize(QSize(450, 450));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 451, 451));
        cameraView = new QVBoxLayout(verticalLayoutWidget);
        cameraView->setObjectName(QStringLiteral("cameraView"));
        cameraView->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(frame);


        horizontalLayout_5->addLayout(verticalLayout_2);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(10, 0));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        clearImgBtn = new QPushButton(centralwidget);
        clearImgBtn->setObjectName(QStringLiteral("clearImgBtn"));
        clearImgBtn->setMaximumSize(QSize(80, 30));

        horizontalLayout_3->addWidget(clearImgBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        imgShowLabel = new QLabel(centralwidget);
        imgShowLabel->setObjectName(QStringLiteral("imgShowLabel"));
        imgShowLabel->setMinimumSize(QSize(300, 300));
        imgShowLabel->setMaximumSize(QSize(400, 300));
        imgShowLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(imgShowLabel);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        savePathLEdit = new QLineEdit(centralwidget);
        savePathLEdit->setObjectName(QStringLiteral("savePathLEdit"));
        savePathLEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(savePathLEdit);

        choosePathBtn = new QPushButton(centralwidget);
        choosePathBtn->setObjectName(QStringLiteral("choosePathBtn"));
        choosePathBtn->setMinimumSize(QSize(0, 30));
        choosePathBtn->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(choosePathBtn);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        captureBtn = new QPushButton(centralwidget);
        captureBtn->setObjectName(QStringLiteral("captureBtn"));
        captureBtn->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(captureBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        openImgBtn = new QPushButton(centralwidget);
        openImgBtn->setObjectName(QStringLiteral("openImgBtn"));
        openImgBtn->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(openImgBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setMinimumSize(QSize(0, 10));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        Camera->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Camera);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 863, 26));
        Camera->setMenuBar(menubar);
        statusbar = new QStatusBar(Camera);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Camera->setStatusBar(statusbar);

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QMainWindow *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "MainWindow", Q_NULLPTR));
        logo->setText(QString());
        name->setText(QApplication::translate("Camera", "\346\202\243\350\200\205\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        Del_Btn_close->setText(QString());
        label->setText(QApplication::translate("Camera", "\351\200\211\346\213\251\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        cameraBtn->setText(QApplication::translate("Camera", "\345\220\257\345\212\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("Camera", "\346\210\252\345\233\276\346\230\276\347\244\272", Q_NULLPTR));
        clearImgBtn->setText(QApplication::translate("Camera", "\346\270\205\347\251\272\346\230\276\347\244\272", Q_NULLPTR));
        imgShowLabel->setText(QString());
        label_2->setText(QApplication::translate("Camera", "\346\210\252\345\233\276\344\277\235\345\255\230\350\267\257\345\276\204\357\274\210\351\273\230\350\256\244\344\277\235\345\255\230\345\234\250\347\263\273\347\273\237\345\233\276\347\211\207\350\267\257\345\276\204\357\274\211", Q_NULLPTR));
        savePathLEdit->setText(QString());
        choosePathBtn->setText(QApplication::translate("Camera", "...", Q_NULLPTR));
        captureBtn->setText(QApplication::translate("Camera", "\346\210\252\345\233\276", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Camera", "\350\257\273\345\217\226", Q_NULLPTR));
        openImgBtn->setText(QApplication::translate("Camera", "\346\211\223\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
