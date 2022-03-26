#ifndef HTTP_LOGIN_H
#define HTTP_LOGIN_H


#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QEventLoop>
#include <QObject>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QDebug>




class http_login:public QObject
{
public:
    http_login();

    static bool post_cookie(QString Url,QMap<QString,QString> header,QByteArray &requestData,QString &replyData);
    static bool post_ourapi(QString Url,QMap<QString,QString> header,QByteArray &requestData,QByteArray &replyData);
    static bool get(QString Url,QMap<QString,QString> header,QByteArray &replyData);
    QString cookie;
};

#endif // HTTP_LOGIN_H
