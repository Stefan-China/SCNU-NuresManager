#include "handrecieve.h"

handRecieve::handRecieve()
{

}
//手环数据接收
void handRecieve::Server_Recieve(void)
{

    QByteArray replyData;
    QString url = "http://tan1024.top:8080/data/one";
    bool result =Http::recieve(url,replyData);
    if (result)
    {
        QJsonValue hand = QJsonDocument:: fromJson(replyData).object().value("data");
         if(hand.isObject())
        {

        QJsonValue handdata = hand.toObject().value("data");
        ui_Latitude=handdata.toObject().value("latitude").toVariant().toString();
        ui_Longtitude=handdata.toObject().value("longtitude").toVariant().toString();
        ui_Heartbeat=handdata.toObject().value("heartbeat").toVariant().toDouble();
        ui_Diastolic=handdata.toObject().value("diastolic").toVariant().toDouble();
        ui_Shrink=handdata.toObject().value("shrink").toVariant().toDouble();
        ui_Bodytemperature=handdata.toObject().value("bodytemperature").toVariant().toDouble();
        ui_Wristtemperature=handdata.toObject().value("wristtemperature").toVariant().toDouble();
        ui_Battery=handdata.toObject().value("battery").toVariant().toDouble();
        ui_Steps=handdata.toObject().value("steps").toVariant().toDouble();
        }
    }
}
void handRecieve::Drop_Server_Recieve(void)
{

    QByteArray replyData;
    QString url = "https://tan1024.top:8083/getstatus";
    bool result =Http::recieve(url,replyData);

    if (result)
    {
        battery_flag = QJsonDocument:: fromJson(replyData).object().value("battery").toString();
        connect_flag = QJsonDocument:: fromJson(replyData).object().value("blue_connect").toString();
        status_flag = QJsonDocument:: fromJson(replyData).object().value("status").toString();
    }
}
void handRecieve::Emotion_Server_Recieve(void)
{

    QByteArray replyData;
    QString url = "http://tan1024.top:8020/getemotion";
    bool result =Http::recieve(url,replyData);
    if (result)
    {
        QJsonValue hand = QJsonDocument:: fromJson(replyData).object().value("emotion");
         if(hand.isObject())
        {
        anger = hand.toObject().value("anger").toVariant().toDouble();
        disgust = hand.toObject().value("disgust").toVariant().toDouble();
        fear = hand.toObject().value(QStringLiteral("fear")).toVariant().toDouble();
        happiness = hand.toObject().value("happiness").toVariant().toDouble();
        neutral = hand.toObject().value("neutral").toVariant().toDouble();
        sadness = hand.toObject().value("sadness").toVariant().toDouble();
        surprise = hand.toObject().value("surprise").toVariant().toDouble();

        }
    }
}

void handRecieve::Drop_open(void)
{

    QByteArray replyData;
    QString url = "https://tan1024.top:8083/open";
    bool result =Http::recieve(url,replyData);
    qDebug()<<result;


}
void handRecieve::Drop_lock(void)
{

    QByteArray replyData;
    QString url = "https://tan1024.top:8083/lock";
    bool result =Http::recieve(url,replyData);
    qDebug()<<result;


}
