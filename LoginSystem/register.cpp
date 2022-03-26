#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->rg);
    pressed=false;//初始化时鼠标左键未按下，设置为false
    this->setFixedSize(911,484);//固定窗口的大小
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    //设置阴影方法1
    ////////////////////////////////////////////////////////////////
    frame = new QFrame(this);
    frame->setGeometry(05, 05, this->width()-10, this->height()-10);//设置有效范围框
    frame->lower();

    shadow_effect = new QGraphicsDropShadowEffect(this);
    shadow_effect->setOffset(0, 0);
    shadow_effect->setColor(Qt::black);
    shadow_effect->setBlurRadius(10);

    frame->setGraphicsEffect(shadow_effect);

    frame->setStyleSheet("QFrame{background-color: rgb(255, 255, 255);"
                         "border-radius:10px;"
                         "border-image:url(:/image/Login_BGxxxxx.png)}"); //设置圆角与背景透明

    ////////////////////////////////////////////////////////////////


    timer02=new QTimer(this);
    timer02->start(300);
    connect(timer02,&QTimer::timeout,this,&Register::count_down2);

    //界面控件
    ui->lineEdit_AccountR->setPlaceholderText("请输入邮箱账号");
    ui->lineEdit_Username->setPlaceholderText("请输入人员姓名");
    ui->lineEdit_password1R->setEchoMode(QLineEdit::Password);
    ui->lineEdit_password1R->setPlaceholderText("6-20位英文字母、数字、符号");
    ui->lineEdit_password2R->setEchoMode(QLineEdit::Password);
    ui->lineEdit_password2R->setPlaceholderText("请确认登录密码");

    //ui->label_getCheckNum->setCursor(Qt::PointingHandCursor);
    ui->btn_RegisterR->setCursor(Qt::PointingHandCursor);//设置鼠标样式
    ui->btn_Change1->setCursor(Qt::PointingHandCursor);


    ui->btn_RegisterR->setFocusPolicy(Qt::StrongFocus);
    ui->btn_Change1->setVisible(false);
    ui->btn_Change2->setVisible(false);
    ui->btn_Change1->setCheckable(true);//设置按钮可检查
    ui->btn_Change2->setCheckable(true);
    ui->btn_Change1->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{border: 1px solid rgb(255,174,81); border-radius: 5px;}");
    ui->btn_Change2->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{border: 1px solid rgb(255,174,81); border-radius: 5px;}");
    //设置输入框中文件输入区，不让输入的文字在被隐藏在按钮下
    ui->lineEdit_password1R->setTextMargins(0, 0, 37, 0);
    ui->lineEdit_password2R->setTextMargins(0, 0, 37, 0);

    QRegExp rx_account("^[a-z0-9A-Z]+[- | a-z0-9A-Z . _]+@([a-z0-9A-Z]+(-[a-z0-9A-Z]+)?\\.)+[a-z]{2,}$");//邮箱验证
    rx=rx_account;   //正则表达式
    QValidator *validator1 = new QRegExpValidator(rx_account,ui->lineEdit_AccountR);
    ui->lineEdit_AccountR->setValidator(validator1);
    QRegExp rx_password("^[^\u4e00-\u9fa5 ]{6,20}$");//密码6~20位字母、数字、符号
    QValidator *validator2 = new QRegExpValidator(rx_password,ui->lineEdit_password1R);
    ui->lineEdit_password1R->setValidator(validator2);
    ui->lineEdit_password2R->setValidator(validator2);


    //手机号填写完之后检测填写的手机号格式
    connect(ui->lineEdit_AccountR,&QLineEdit::editingFinished,this,&Register::CheckAccountNum);
    //显示和隐藏密码
    connect(ui->btn_Change1,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_password1R->setEchoMode(QLineEdit::Normal);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_password1R->setEchoMode(QLineEdit::Password);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    connect(ui->btn_Change2,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_password2R->setEchoMode(QLineEdit::Normal);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_password2R->setEchoMode(QLineEdit::Password);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    //注册
    connect(ui->btn_RegisterR,&QPushButton::clicked,this,&Register::Register_clicked);

    //最小化
    connect(ui->btn_MinR,&QPushButton::clicked,[=](){
        this->showMinimized();
    });
    //关闭注册界面
    connect(ui->btn_CloseR,&QPushButton::clicked,[=](){
        //this->close();//close之后信号就发不出去了
        this->hide();
        Sleep(200);
        emit Show_login();
    });
    //注册成功界面最小化
    connect(ui->min_rs,&QPushButton::clicked,[=](){
        this->showMinimized();
    });
    //注册成功界面关闭
    connect(ui->close_rs,&QPushButton::clicked,[=](){
        this->close();
    });
    //跳转到登录界面
    connect(ui->btn_gotologin,&QPushButton::clicked,[=](){
        ui->btn_gotologin->setEnabled(false);
        ui->stackedWidget->setCurrentWidget(ui->rg);
        emit Show_login();
        ui->btn_gotologin->setEnabled(true);
    });


    //高4.17+
    QList<MyLineEdit *> my_lineEdit = this->findChildren<MyLineEdit *>();
    foreach (MyLineEdit *lineedit, my_lineEdit) {
        //        connect(lineedit, SIGNAL(clicked()), this, SLOT(on_clicked()));
        //        connect(lineedit, SIGNAL(LostFocus()), this, SLOT(on_focusout()));
    }


}

Register::~Register()
{
    delete ui;
}


//延时函数(单位:毫秒)
void Register::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//关闭窗口之后清除所有之前填写的信息
void Register::closeEvent(QCloseEvent *event)
{
    ui->label_errR->clear();
    ui->lineEdit_AccountR->clear();
    ui->lineEdit_password1R->clear();
    ui->lineEdit_password2R->clear();
    ui->lineEdit_Username->clear();


}


//密码可视
void Register::count_down2()
{
    if(ui->lineEdit_password1R->text().isEmpty())
    {
        ui->btn_Change1->setVisible(false);
        ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change1->setChecked(false);
        ui->lineEdit_password1R->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change1->setVisible(true);
    }
    if(ui->lineEdit_password2R->text().isEmpty())
    {
        ui->btn_Change2->setVisible(false);
        ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change2->setChecked(false);
        ui->lineEdit_password2R->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change2->setVisible(true);
    }
}


//账号检测
void Register::CheckAccountNum()
{
    ui->label_errR->clear();
    //验证是否是邮箱格式
    QString AccountNum=ui->lineEdit_AccountR->text();
    if(rx.exactMatch(AccountNum))
    {
        ui->label_errR->setText("邮箱账号匹配正确");
    }else{
        ui->label_errR->setText("邮箱账号匹配有误,请重新输入");
        ui->lineEdit_AccountR->clear();
        AccountNum.clear();
    }

}

//立即注册
void Register::Register_clicked()
{
     ui->btn_RegisterR->setEnabled(false);
     QString account_Num=ui->lineEdit_AccountR->text();    //获取填写的账号
     QString Password_Num=ui->lineEdit_password1R->text(); //获取密码1
     QString PwConfirm_Num=ui->lineEdit_password2R->text();//获取密码2
     QString User_str=ui->lineEdit_Username->text();        //获取用户姓名
     QString Username=QString::fromStdString(std::string(ui->combo_user->currentText().toStdString()));
     if(account_Num == ""||rx.exactMatch(account_Num)==0){ui->label_errR->setText("账号为空或格式错误");
     ui->btn_RegisterR->setEnabled(true);}
     else if (Password_Num =="") {ui->label_errR->setText("请输入密码");
         ui->btn_RegisterR->setEnabled(true);
     }
     else if (PwConfirm_Num == "") {ui->label_errR->setText("请输入确认密码");
         ui->btn_RegisterR->setEnabled(true);
     }
     else if (Password_Num !=PwConfirm_Num) {ui->label_errR->setText("两次密码不一致");
         ui->btn_RegisterR->setEnabled(true);
     }
     else
     {
     //注册
     QByteArray replyData;
     QMap<QString,QString> header;  //封装头部信息
     header.insert(QString("Content-Type"),QString("application/json"));
     QString imgurl=QString("http://swxin.top:8090/user/doregister");
     QJsonObject obj;
     //生成json
     obj.insert("email", account_Num);
     obj.insert("password", Password_Num);
     obj.insert("roleName", Username);
     obj.insert("username", User_str);

     QByteArray body = QJsonDocument(obj).toJson(QJsonDocument::Compact);
     QString str(body);
     qDebug()<<body;
     ui->btn_RegisterR->setEnabled(true);
     bool result = http_login :: post_ourapi(imgurl,header,body,replyData);
     if (result)
     {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
         qDebug()<<obj<<"guance _______________________";
        QString status = obj.value("data").toString();
        ui->label_errR->setText(obj.value("message").toString());

        ui->stackedWidget->setCurrentWidget(ui->rs);
       }

    }



}

//设置登录快捷键
void Register::keyPressEvent(QKeyEvent* event)
{
    if((event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) && ui->btn_RegisterR->isEnabled())
    {
        Register_clicked();
    }
}

void Register::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        drag_point=event->globalPos()-this->pos();
        pressed=true;
        event->accept();
    }
}

void Register::mouseReleaseEvent(QMouseEvent *event)
{
     pressed=false;
}

void Register::mouseMoveEvent(QMouseEvent *event)
{
        if(pressed)
        {
            this->move(event->globalPos()-drag_point);//鼠标拖动窗口
            event->accept();
        }
}

