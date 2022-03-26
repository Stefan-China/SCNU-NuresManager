#include "forgetpassword_1.h"
#include "ui_forgetpassword_1.h"

ForgetPassword_1::ForgetPassword_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ForgetPassword_1)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::ClickFocus);
    pressed=false;//初始化时鼠标左键未按下，设置为false
    this->setFixedSize(911,484);//固定窗口的大小
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    key="njYD76zs";

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

    //this->setAttribute(Qt::WA_TranslucentBackground,true);
    ////////////////////////////////////////////////////////////////

    //验证码倒计时

    timer04=new QTimer(this);
    timer04->start(300);
    connect(timer04,&QTimer::timeout,this,&ForgetPassword_1::count_down1);

    //界面控件

    ui->lineEdit_Email->setPlaceholderText("请输入绑定的邮箱");
    ui->lineEdit_oldpassword->setPlaceholderText("请输入原密码");
    ui->lineEdit_Password_new->setEchoMode(QLineEdit::Password);
    ui->lineEdit_Password_new->setPlaceholderText("6-20位英文字母、数字、符号");
    ui->lineEdit_Password_check->setEchoMode(QLineEdit::Password);
    ui->lineEdit_Password_check->setPlaceholderText("请确认登入密码");


    //ui->label_getCheckNumF1->setCursor(Qt::PointingHandCursor);
    ui->btn_SubmitF1->setCursor(Qt::PointingHandCursor);//设置鼠标样式


    ui->btn_SubmitF1->setFocusPolicy(Qt::StrongFocus);
    ui->btn_Change1->setCheckable(true);
    ui->btn_Change2->setCheckable(true);
    ui->btn_Change1->setVisible(false);
    ui->btn_Change2->setVisible(false);
    ui->btn_Change1->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{background:transparent; border: 2px solid rgb(255,174,81); border-radius: 5px;}");
    ui->btn_Change2->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{background:transparent; border: 2px solid rgb(255,174,81); border-radius: 5px;}");
    ui->lineEdit_Password_new->setTextMargins(0, 0, 37, 0);//设置输入框中文件输入区，不让输入的文字在被隐藏在按钮下
    ui->lineEdit_Password_check->setTextMargins(0, 0, 37, 0);

    QRegExp rx_account("^[a-z0-9A-Z]+[- | a-z0-9A-Z . _]+@([a-z0-9A-Z]+(-[a-z0-9A-Z]+)?\\.)+[a-z]{2,}$");
    rx=rx_account;
    QValidator *validator1 = new QRegExpValidator(rx_account,ui->lineEdit_Email);
    ui->lineEdit_Email->setValidator(validator1);//手机号输入只能是数字
    QRegExp rx_password("^[^\u4e00-\u9fa5 ]{6,20}$");//密码6~20位字母、数字、符号
    QValidator *validator2 = new QRegExpValidator(rx_password,ui->lineEdit_Password_new);
    ui->lineEdit_Password_new->setValidator(validator2);
    ui->lineEdit_Password_check->setValidator(validator2);



    //显示和隐藏密码
    connect(ui->btn_Change1,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_Password_new->setEchoMode(QLineEdit::Normal);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_Password_new->setEchoMode(QLineEdit::Password);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    connect(ui->btn_Change2,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_Password_check->setEchoMode(QLineEdit::Normal);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_Password_check->setEchoMode(QLineEdit::Password);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });

    //提交申请
    connect(ui->btn_SubmitF1,&QPushButton::clicked,this,&ForgetPassword_1::Submit);
    //最小化
    connect(ui->btn_MinR,&QPushButton::clicked,[=](){
        this->showMinimized();
    });
    //关闭
    connect(ui->btn_CloseR,&QPushButton::clicked,[=](){
        //        this->close();
        this->hide();
        Sleep(200);
        emit Toshow_login();
    });



    //高4.17+
    QList<MyLineEdit *> my_lineEdit = this->findChildren<MyLineEdit *>();
    foreach (MyLineEdit *lineedit, my_lineEdit) {
        //        connect(lineedit, SIGNAL(clicked()), this, SLOT(on_clicked()));
        //        connect(lineedit, SIGNAL(LostFocus()), this, SLOT(on_focusout()));
    }
}

ForgetPassword_1::~ForgetPassword_1()
{
    delete ui;
}




//延时函数(单位:毫秒)
void ForgetPassword_1::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}



void ForgetPassword_1::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        drag_point=event->globalPos()-this->pos();
        pressed=true;
        event->accept();
    }
}

void ForgetPassword_1::mouseReleaseEvent(QMouseEvent *event)
{
     pressed=false;
}

void ForgetPassword_1::mouseMoveEvent(QMouseEvent *event)
{
        if(pressed)
        {
            this->move(event->globalPos()-drag_point);//鼠标拖动窗口
            event->accept();
        }
}

//设置登录快捷键
void ForgetPassword_1::keyPressEvent(QKeyEvent* event)
{
    if((event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) && ui->btn_SubmitF1->isEnabled())
    {
        Submit();
    }
}

//关闭窗口之后清除所有之前填写的信息
void ForgetPassword_1::closeEvent(QCloseEvent *event)
{
    ui->lineEdit_Email->clear();
    ui->lineEdit_Password_new->clear();
    ui->lineEdit_Password_check->clear();
    ui->label_errRF1->clear();
    ui->lineEdit_oldpassword->clear();

}


void ForgetPassword_1::count_down1()
{
    if(ui->lineEdit_Password_new->text().isEmpty())
    {
        ui->btn_Change1->setVisible(false);
        ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change1->setChecked(false);
        ui->lineEdit_Password_new->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change1->setVisible(true);
    }
    if(ui->lineEdit_Password_check->text().isEmpty())
    {
        ui->btn_Change2->setVisible(false);
        ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change2->setChecked(false);
        ui->lineEdit_Password_check->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change2->setVisible(true);
    }
}
//账号检测
void ForgetPassword_1::check_phoneNum()
{
    ui->label_errRF1->clear();
    //验证是否是手机号格式
    QString PhoneNum=ui->lineEdit_Email->text();
    if(rx.exactMatch(PhoneNum))
    {
        qDebug("邮箱账号匹配成功");
    }else{
        qDebug("邮箱账号匹配有误");
        ui->label_errRF1->setText("邮箱账号匹配有误,请重新输入");
        ui->lineEdit_Email->clear();
        PhoneNum.clear();
    }
}

//提交申请
void ForgetPassword_1::Submit()
{
    ui->btn_SubmitF1->setEnabled(false);//点了一下之后就不能再点，如果提交申请失败，再次激活，或者成功之后再次激活
     //在这里再把验证码上传(接收到返回值之后判断是否上传成功，成功了则跳转到下一个界面)
    QString account_Num=ui->lineEdit_Email->text();    //获取填写的账号
    QString Password_old_Num=ui->lineEdit_oldpassword->text(); //获取密码1
    QString Password_new_Num=ui->lineEdit_Password_new->text();//获取密码2
    QString Password_check_Num=ui->lineEdit_Password_check->text();     //原始密码

    if(account_Num == ""||rx.exactMatch(account_Num)==0)
    {ui->label_errRF1->setText("账号为空或格式错误");
    ui->btn_SubmitF1->setEnabled(true);}
    else if (Password_old_Num =="") {ui->label_errRF1->setText("请输入密码");
        ui->btn_SubmitF1->setEnabled(true);
    }
    else if (Password_new_Num == "") {ui->label_errRF1->setText("请输入确认密码");
        ui->btn_SubmitF1->setEnabled(true);
    }
    else if (Password_check_Num !=Password_new_Num) {ui->label_errRF1->setText("两次密码不一致");
        ui->btn_SubmitF1->setEnabled(true);
    }
    else {
        //修改密码
        QByteArray replyData;
        QMap<QString,QString> header;  //封装头部信息
        header.insert(QString("Content-Type"),QString("application/json"));
        QString imgurl=QString("http://swxin.top:8090/user/changePassword");
        QJsonObject obj;
        //生成json

        obj.insert("email", account_Num);
        obj.insert("oldPassword", Password_old_Num);
        obj.insert("password", Password_new_Num);
        obj.insert("okPassword", Password_check_Num);

        QByteArray body = QJsonDocument(obj).toJson(QJsonDocument::Compact);
        QString str(body);
        qDebug()<<body;

        bool result = http_login :: post_ourapi(imgurl,header,body,replyData);
        if (result)
        {
           QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
           qDebug()<<obj<<"guance _______________________";
           QString status = obj.value("data").toString();
           ui->label_errRF1->setText(obj.value("message").toString());

           //ui->stackedWidget->setCurrentWidget(ui->rs);
          }

       }



}



