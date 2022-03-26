#include "http_login.h"
#include <qDebug>
#include "http.h"
#include <Qstring>


http_login::http_login()
{

}
//对接自己云服务器发送请求
bool http_login::post_cookie(QString Url, QMap<QString, QString> header, QByteArray &requestData, QString &replyData)
{

    QNetworkAccessManager manager;//发送请求的动作

    QNetworkRequest request;   //请求的内容
    request.setUrl(Url);
    QMapIterator<QString,QString> it(header) ;
    while (it.hasNext())
    {
        it.next();
        request.setRawHeader(it.key ().toLatin1(), it.value().toLatin1());

    }

    QNetworkReply *reply = manager.post(request,requestData);

    QEventLoop l;
    connect(reply,&QNetworkReply::finished,&l,&QEventLoop::quit);

    l.exec();     //死循环

   //获取Cookies
   if(reply->hasRawHeader("Set-Cookie") )
   {
       QByteArray cookie = reply->rawHeader("Set-Cookie");
       QStringList list= QString::fromStdString(cookie.toStdString()).split(";");  
       replyData = list[0];
   }

    if (reply != nullptr && reply->error() == QNetworkReply:: NoError)
    {
         return true;
    }
    else
    {
         return false;
    }

}

//对接自己云服务器发送请求
bool http_login::post_ourapi(QString Url, QMap<QString, QString> header, QByteArray &requestData, QByteArray &replyData)
{

    QNetworkAccessManager manager;//发送请求的动作

    QNetworkRequest request;   //请求的内容
    request.setUrl(Url);
    QMapIterator<QString,QString> it(header) ;
    while (it.hasNext())
    {
        it.next();
        request.setRawHeader(it.key ().toLatin1(), it.value().toLatin1());
    }

    QNetworkReply *reply = manager.post(request,requestData);

    QEventLoop l;
    connect(reply,&QNetworkReply::finished,&l,&QEventLoop::quit);

    l.exec();     //死循环

qDebug()<<"541";
    if (reply != nullptr && reply->error() == QNetworkReply:: NoError)
    {
         replyData = reply->readAll();
         return true;
    }
    else
    {
         return false;
    }

}
//get
bool http_login::get(QString Url,QMap<QString,QString> header,QByteArray &replyData)
{
    QNetworkAccessManager manager;//发送请求的动作
    QNetworkRequest request;   //请求的内容
    request.setUrl(Url);
    QMapIterator<QString,QString> it(header) ;
    while (it.hasNext())
    {
        it.next();
        request.setRawHeader(it.key ().toLatin1(), it.value().toLatin1());

    }
    QNetworkReply *handreply = manager.get(request);
    QEventLoop l;
    connect(handreply,&QNetworkReply::finished,&l,&QEventLoop::quit);
    l.exec();     //死循环
    if (handreply != nullptr && handreply->error() == QNetworkReply:: NoError)
    {
         replyData = handreply->readAll();
         return true;
    }
    else
    {
         return false;
    }

}

