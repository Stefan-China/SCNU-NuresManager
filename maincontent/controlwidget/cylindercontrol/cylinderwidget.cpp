/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：柱状图窗口
 * ***************************************/
#include "cylinderwidget.h"
#include "ui_cylinderwidget.h"

extern QString cookie;
//构造函数
CylinderWidget::CylinderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CylinderWidget)
{
    ui->setupUi(this);
    qDebug()<<"CylinderWidget";
    initValue();

}
//析构函数
CylinderWidget::~CylinderWidget()
{
    delete ui;
}

void CylinderWidget::on_pushButton_2_clicked()
{
    Camera *m_Camera= new Camera();
    m_Camera->show();
}

void CylinderWidget::initValue()
{
      FlowLayout *flowLayout = new FlowLayout(ui->scrollAreaWidgetContents);

    QByteArray replyData;
    QJsonObject obj;
    QString imgurl=QString("http://swxin.top:8090/patient/getAllCardId");

    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("false"));
    header.insert(QString("cookie"),cookie);
    qDebug()<<header;


    bool result = http_login :: get(imgurl,header,replyData);
    qDebug()<<result;
    if (result)
    {
       QJsonObject obj = QJsonDocument:: fromJson(replyData).object();

       double status = obj.value("status").toDouble();
       QJsonValue val = obj.value("data");
       qDebug()<<val;
       if(val.isArray())
       {
           QJsonArray array = val.toArray();
            int TSize = array.size();

            for(int i = 0;i <TSize;++i)
            {
                CylinderControl *cylinderControl = new CylinderControl();
                QString patient_id =array.at(i).toObject().value("cardId").toString();

                QString patient_name =array.at(i).toObject().value("name").toString();
                qDebug()<<patient_id;


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


                cylinderControl->createFrame(pixmap, patient_id,patient_name);
                flowLayout->addWidget(cylinderControl);

            }
       }

    }

}

void CylinderWidget::on_pushButton_3_clicked()
{

    if(ui->textEdit_id->toPlainText()== NULL)
    {
        QMessageBox::information(NULL, "提示","请输入病人ID号");
        return ;
    }else
    {
        informatiton_patient *m_informatiton_patient = new informatiton_patient(nullptr,ui->textEdit_id->toPlainText());
        m_informatiton_patient->show();
    }

}

void CylinderWidget::on_refresh_clicked()
{
    initValue();
}
