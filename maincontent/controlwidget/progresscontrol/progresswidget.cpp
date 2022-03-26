/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：进度条窗口
 * ***************************************/
#include "progresswidget.h"
#include "ui_progresswidget.h"
#include "hand_recieve/handrecieve.h"
extern QString cookie;
// 构造函数
ProgressWidget::ProgressWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProgressWidget)
{
    ui->setupUi(this);
    qDebug()<<"ProgressWidget";
    this->initValue();
}

// 析构函数
ProgressWidget::~ProgressWidget()
{
    delete ui;
}

// 初始化数据
void ProgressWidget::initValue()
{

    FlowLayout *flowLayout = new FlowLayout(ui->scrollAreaWidgetContents);

    QByteArray replyData;
    QJsonObject obj;
    QString imgurl=QString("http://swxin.top:8090/patient/getAllCardId");

    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("false"));
    header.insert(QString("cookie"),cookie);


    bool result = http_login :: get(imgurl,header,replyData);
    qDebug()<<"result""";
    if (result)
    {
       QJsonObject obj = QJsonDocument:: fromJson(replyData).object();

       double status = obj.value("status").toDouble();
       QJsonValue val = obj.value("data");
       if(val.isArray())
       {
           QJsonArray array = val.toArray();
            int TSize = array.size();

            for(int i = 0;i <TSize;++i)
            {
                progresscontrol *m_progresscontrol = new progresscontrol();
                QString patient_id =array.at(i).toObject().value("cardId").toString();

                QString patient_name =array.at(i).toObject().value("name").toString();

                QUrl url("http://"+array.at(i).toObject().value("imageUrl").toString());
                QNetworkAccessManager manager;
                QEventLoop loop;

                // qDebug() << "Reading picture form " << url;
                QNetworkReply *reply = manager.get(QNetworkRequest(url));
                //请求结束并下载完成后，退出子事件循环
                QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
                //开启子事件循环
                loop.exec();

                QByteArray jpegData = reply->readAll();
                QPixmap pixmap;
                pixmap.loadFromData(jpegData);

                m_progresscontrol->createFrame(pixmap, patient_id,patient_name);
                flowLayout->addWidget(m_progresscontrol);

            }
       }

    }
}



void ProgressWidget::on_pushButton_3_clicked()
{
    if(ui->textEdit_id->toPlainText()== NULL)
    {
        QMessageBox::information(NULL, "提示","请输入病人ID号");
        return ;
    }else
    {
        information_handband *m_information_handband = new information_handband(nullptr,ui->textEdit_id->toPlainText());
        m_information_handband->show();
    }
}

void ProgressWidget::on_refresh_clicked()
{
     initValue();
}
