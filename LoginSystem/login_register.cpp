#include "login_register.h"
#include "ui_login_register.h"
QString cookie, username;
int DELAY_TIME=200;
Login_Register::Login_Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login_Register)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::ClickFocus);

    //设置阴影方法1
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


    pressed=false;//初始化时鼠标左键未按下，设置为false

    this->setFixedSize(911,484);//固定窗口的大小
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    m_ForgetPW=new ForgetPassword_1();//初始化一个忘记密码界面类的对象
    m_Register=new Register();//初始化一个注册界面类的对象

    //给一些label安装事件过滤器
    ui->label_ForgetPW->installEventFilter(this);
    ui->label_RegisterAccount->installEventFilter(this);

    ui->btn_Login->setFocusPolicy(Qt::StrongFocus);

    //设置输入账号的ComboBox的格式
    ui->combo_account->lineEdit()->setPlaceholderText("请输入账号");
    //实例化一个正则表达式，限制只能输入邮箱;
    QRegExp rx_account("^[a-z0-9A-Z]+[- | a-z0-9A-Z . _]+@([a-z0-9A-Z]+(-[a-z0-9A-Z]+)?\\.)+[a-z]{2,}$");
    rx=rx_account;
    QValidator *validator1 = new QRegExpValidator(rx_account,ui->combo_account->lineEdit());
    ui->combo_account->lineEdit()->setValidator(validator1);
    //设置输入密码的lineEdit的格式

    ui->lineEdit_password->setPlaceholderText("请输入密码");//提示文字
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);//输入密码的格式
    QRegExp rx_password("^[^\u4e00-\u9fa5 ]{6,20}$");//密码6~20位字母、数字、符号
    QValidator *validator2 = new QRegExpValidator(rx_password,ui->lineEdit_password);
    ui->lineEdit_password->setValidator(validator2);

    //高+4.10下拉框
    connect(ui->combo_account,SIGNAL(signal_to_db_remove_account(QString)), this, SLOT(remove_account(QString)));
    ui->combo_account->setEditable(true);
    ui->combo_account->setMaxVisibleItems(6);//一次性最多显示6个，超过6个就要使用滑动条了
    if(databs.Traverse())//检测数据库里是否有已经保存的数据
    {
        databs.add_account();//把已经保存的数据读取到databs.accounts里面
        for( int i = 0 ; i < databs.accounts.size() ; i++ )
        {
            ui->combo_account->increaseItem(databs.accounts[i]);//设置下拉框items
        }
    }
    //高+4.10下拉框
    connect(ui->btn_GotoOfficialWeb,&QPushButton::clicked,this,&Login_Register::GoToOfficialWeb);
    connect(ui->btn_Min,&QPushButton::clicked,this,&Login_Register::Be_Mini);
    connect(ui->btn_Close,&QPushButton::clicked,this,&Login_Register::Be_Close);
    connect(ui->btn_Login,&QPushButton::clicked,this,&Login_Register::Login);
    //注册返回
    connect(m_Register,&Register::Show_login,[=](){
        m_Register->close();
        this->show();
        ui->btn_Login->setText("登录");
        ui->label_err->clear();
    });
    connect(m_ForgetPW,&ForgetPassword_1::Toshow_login,[=](){
        m_ForgetPW->close();
        this->show();
        ui->btn_Login->setText("登录");
        ui->label_err->clear();

    });
    //密码隐藏
    timer_password=new QTimer(this);
    timer_password->start(300);
    connect(timer_password,&QTimer::timeout,this,&Login_Register::count_down_passward);

    ui->btn_Change_1->setCheckable(true);
    ui->btn_Change_1->setVisible(false);
    ui->btn_Change_1->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{background:transparent; border: 2px solid rgb(255,174,81); border-radius: 5px;}");

    //显示和隐藏密码
    connect(ui->btn_Change_1,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
            ui->btn_Change_1->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_password->setEchoMode(QLineEdit::Password);
            ui->btn_Change_1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
//高+4.17
    QList<MyLineEdit *> my_lineEdit = this->findChildren<MyLineEdit *>();
    foreach (MyLineEdit *lineedit, my_lineEdit) {

    }
    QList<ComboBox *> my_ComboBox = this->findChildren<ComboBox *>();
    foreach (ComboBox *combobox, my_ComboBox) {
        ;
    }


    take_cookie();

}

Login_Register::~Login_Register()
{

    delete ui;
}
void Login_Register::take_cookie()
{
    //先自动获取cookie

    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/json"));
    QString imgurl=QString("http://swxin.top:8090/user/dologin");
    QJsonObject obj;

    //生成json
    obj.insert("email", "18271661322@qq.com");
    obj.insert("password", "123");
    obj.insert("ip", getIP());
    obj.insert("broswer", "PC");

    QByteArray body = QJsonDocument(obj).toJson(QJsonDocument::Compact);
    QString str(body);

    bool result = http_login :: post_cookie(imgurl,header,body,cookie);
    if (result)
    {
        ui->label_err->setText("获取COOKIE成功");
        qDebug()<<cookie;
    }
}
//密码隐藏
void Login_Register::count_down_passward()
{
    if(ui->lineEdit_password->text().isEmpty())
    {
        ui->btn_Change_1->setVisible(false);
        ui->btn_Change_1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change_1->setChecked(false);
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change_1->setVisible(true);
    }

}
//服务器 ping
bool Login_Register::ping_server(const QString ip)
{
    QString cmdstr = QString("ping %1 -n 1 -w %2").arg(ip).arg(1000);
    cmd.start(cmdstr);
    cmd.waitForReadyRead(1000);
    cmd.waitForFinished(1000);
    QString response = cmd.readAll().data();
    if(response.indexOf("TTL") == -1)
    {
        Login_state = 1;//离线登录
        return false;
    }else{
        Login_state = 0;//在线登录
        return true;
    }
}

// 下拉框 删除以前账户
void Login_Register::remove_account(QString account)
{
    databs.deleteByaccount(account);//删除当前items
}
// 检查用户文件夹
void Login_Register::Check_UserDir(QString account)
{
    QDir *qd = new QDir();
    bool exist = qd->exists(QString("user/%1").arg(account));
    if(exist){
        qDebug("该用户在本地已拥有单独的文件夹");
    }else {
        qDebug("该用户在本地没有单独的文件夹,需要为其创建");
        if(!qd->mkpath(QString("user/%1").arg(account)))
        {
            qDebug("为当前用户创建本地文件夹失败");
        }else{
            qDebug("已成功为当前用户创建本地文件夹");
        }
    }
}
//检查自动登录
void Login_Register::CheckAutoLogin()
{
    QDir *qd = new QDir;

    bool exist = qd->exists("Login_info/Login_info.ini");
    if(exist){

    setting=new QSettings("Login_info/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
    bool ischecked;
    if(setting->value("info/ischecked")=="true")
    {ischecked=true;}else{ischecked=false;}
    ui->checkBox_autoLogin->setChecked(ischecked);
    }
    //如果勾选了自动登录，则"登录按钮"直接显示为"登录中..."
    if(ui->checkBox_autoLogin->isChecked())
    {
        ui->combo_account->setCurrentText(setting->value("info/account").toString());
        Login();
    }
}

//延时函数(单位:毫秒)
void Login_Register::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}




void Login_Register::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        drag_point=event->globalPos()-this->pos();
        pressed=true;
        event->accept();
    }
}

void Login_Register::mouseReleaseEvent(QMouseEvent *event)
{
     pressed=false;
}

void Login_Register::mouseMoveEvent(QMouseEvent *event)
{
        if(pressed)
        {
            this->move(event->globalPos()-drag_point);//鼠标拖动窗口
            event->accept();
        }
}



//设置登录快捷键
void Login_Register::keyPressEvent(QKeyEvent* event)
{
    if((event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) && ui->btn_Login->isEnabled())
    {
        Login();
    }
}

//事件过滤器,处理label的点击操作
bool Login_Register::eventFilter(QObject *obj, QEvent *event)
{
   if(event->type()==QEvent::MouseButtonRelease)
   {
       //"忘记密码？"标签被点击
       if(obj==ui->label_ForgetPW)
       {
           this->hide();
           Sleep(DELAY_TIME);
           m_ForgetPW->show();//显示忘记密码界面

        return true;
       }
       else if(obj==ui->label_RegisterAccount)
       {
           this->hide();
           Sleep(DELAY_TIME);
           m_Register->show();//显示注册界面

        return true;
       }
       else{
           return false;
       }
   }else
   {
       // pass the event on to the parent class
       return QWidget::eventFilter(obj, event);
   }
}

void Login_Register::offline_login()
{
    //读取用户输入的账号密码信息
    std::string account = ui->combo_account->currentText().toStdString();
    std::string password = ui->lineEdit_password->text().toStdString();


    //离线后面搞
    this->hide(); //界面隐藏，然后进入界面并进行账号存储操作
    //进入主界面三部曲
    MainObject *mainObject=new MainObject(this);
    mainObject->setInit();
    LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);




}

//登录
void Login_Register::Login()
{
    ui->label_err->clear();
    //检查账号是否符合
    bool check_account=CheckAccountNum();

    if(check_account==true)
    {
        if(ping_server("121.4.255.76") ==false)          //ping服务器失败，转离线模式
        {
            //离线登录
            ui->label_err->setText("服务器关闭转离线登录");
            offline_login();
            qDebug()<<"离线登录";
        }
        else{
            ui->label_err->setText("服务器开启正在登录");
            ui->btn_Login->setText("登录中...");
            ui->btn_Login->setEnabled(false);
            QByteArray replyData;
            QJsonObject obj;
            QString imgurl=QString("http://swxin.top:8090/user/dologin");

            QMap<QString,QString> header;  //封装头部信息
            header.insert(QString("Content-Type"),QString("application/json"));
            header.insert(QString("cookie"),cookie);
            qDebug()<<header;
            std::string account = ui->combo_account->currentText().toStdString();
            std::string password = ui->lineEdit_password->text().toStdString();
            //生成json
            obj.insert("email", QString::fromStdString(std::string(account)));
            obj.insert("password", QString::fromStdString(std::string(password)));
            obj.insert("ip", getIP());
            obj.insert("broswer", "PC");

            QByteArray body = QJsonDocument(obj).toJson(QJsonDocument::Compact);
            QString str(body);

            bool result = http_login :: post_ourapi(imgurl,header,body,replyData);

            if (result)
            {
               QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
               qDebug()<<obj;
               double status = obj.value("status").toDouble();
               QJsonValue val = obj.value("data");
               if(val.isObject())
               {
                    username=val.toObject().value("username").toString();

               }
               ui->label_err->setText(obj.value("message").toString());
               if(status==1)
               {
                   ui->btn_Login->setText("登录");
                   qDebug()<<QString::fromStdString(std::string(account));
                   ui->btn_Login->setEnabled(true);
                   //登录成功后判断当前账号在下拉框数据库中是否已经存在，若不存在则保存进去
                   Check_UserDir(QString::fromStdString(std::string(account)));
                   //高+4.10下拉框
                   if(!databs.query_comboBox(QString::fromStdString(account)))
                   {
                       databs.insert(QString::fromStdString(account));
                       qDebug()<<QString::fromStdString(account).toLongLong();
                       ui->combo_account->increaseItem(QString::fromStdString(account));//设置下拉框items
                   }

                   if(ui->checkBox_autoLogin->isChecked())//勾选了下次自动登录(保存当前的账号和"下次自动登录"的状态到本地)
                   {
                       //先判断ini文件是否已经存在，若存在，则直接设置value，若不存在，则先新建再设置value
                       QDir *qd = new QDir;

                       bool exist = qd->exists("Login_info/Login_info.ini");
                       qDebug()<<exist<<"exist_status";
                       if(exist){
                           setting=new QSettings("Login_info/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
                           setting->setValue("info/account",QString::fromStdString(account));//记录此时用户账号
                           setting->setValue("info/passward",QString::fromStdString(password));//记录此时用户密码
                           setting->setValue("info/ischecked","true");//记录此时用户设置的"下次自动登录"的状态
                       }else{
                           setting=new QSettings("Login_info/Login_info.ini",QSettings::IniFormat);//此时是在新建一个ini
                           setting->setValue("info/account",QString::fromStdString(account));//记录此时用户账号
                           setting->setValue("info/passward",QString::fromStdString(password));//记录此时用户密码
                           setting->setValue("info/ischecked","true");//记录此时用户设置的"下次自动登录"的状态
                       }
                   }else{
                          //不勾选自动登录，无任何操作
                   }
                   this->hide();
                   //蔡＋  登录主界面
                   MainObject *mainObject=new MainObject(this);
                   mainObject->setInit();
                   LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);


               }else   //密码错误或者账户不存在，重新输入
               {
                ui->btn_Login->setEnabled(true);
                ui->btn_Login->setText("登录");
                }
            }
        }
    }
    else
    {
            //输入账号格式错误，进行恢复
            ui->btn_Login->setEnabled(true);
            ui->btn_Login->setText("登录");
    }
}




//打开官网
void Login_Register::GoToOfficialWeb()
{
    QDesktopServices::openUrl(QUrl("https://blog.csdn.net/qq_28810395"));
}

//最小化窗口
void Login_Register::Be_Mini()
{
   this->showMinimized();
}

//关闭窗口
void Login_Register::Be_Close()
{
    DWORD pid2 = GetCurrentProcessId(); // 当前进程ID
    HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS,FALSE,pid2); // 获取进程句柄
    if( hProc == NULL)
        {
            qDebug() << "正常退出 ";
            return;
        }
    BOOL ret = TerminateProcess(hProc,0); // 强制进程退出
        if(ret == FALSE)
        {
            qDebug() << "强制退出 ";
            return ;
        }
        CloseHandle(hProc);


}
/**
 * @brief 获取本机IP地址
 */

QString  Login_Register::getIP()
{
    QString IP;
    // 1. 获取所有网络接口
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();

    QList<QNetworkAddressEntry> entry;
    foreach(QNetworkInterface inter, interfaces)
    {
        // 过滤掉不需要的网卡信息
        if (is_virtual_network_card_or_loopback(inter.humanReadableName()))
            continue;

        if (inter.flags() & (QNetworkInterface::IsUp | QNetworkInterface::IsRunning))
        {
            entry = inter.addressEntries();
            // entry.at(0) 是IPv6信息
            if (entry.at(1).ip().protocol() == QAbstractSocket::IPv4Protocol)
            {
                if (-1 != inter.name().indexOf("wireless"))
                {
                qDebug() << inter.humanReadableName() << inter.name() << " 无线网IP: " << entry.at(1).ip().toString();
                IP=entry.at(1).ip().toString();
                }
                else if (-1 != inter.name().indexOf("ethernet"))
                {
                    qDebug() << inter.humanReadableName() << inter.name() << " 以太网IP: " <<entry.at(1).ip().toString();
                    IP=entry.at(1).ip().toString();
                }

            }
           // entry.clear();
        }
    }
    return IP;
}


/**
 * @brief 检测当前网卡是否是虚拟网卡(VMware/VirtualBox)或回环网卡
 * @param str_card_name  网卡的描述信息
 * @return 如果是虚拟网卡或回环网卡，返回true, 否则返回false
 */
bool Login_Register::is_virtual_network_card_or_loopback(QString str_card_name)
{
    if (-1 != str_card_name.indexOf("VMware")
            || -1 != str_card_name.indexOf("Loopback")
            || -1 != str_card_name.indexOf("VirtualBox")
            )
        return true;

    return false;
}

//账号检测
bool Login_Register::CheckAccountNum()
{

    //验证是否是手机号格式
    QString AccountNum=QString::fromStdString(std::string(ui->combo_account->currentText().toStdString()));
    qDebug()<<AccountNum;
    if(rx.exactMatch(AccountNum))
    {
        ui->label_err->setText("账号格式正确");
        ui->btn_Login->setEnabled(false);
        return true;
    }else{
        ui->label_err->setText("账号格式错误，请输入邮箱格式");
        ui->btn_Login->setEnabled(true);
        AccountNum.clear();
        return false;
    }

}
