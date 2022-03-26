#pragma execution_character_set("utf-8")
#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <cassert>
#include <string>
#include <string.h>
#include <vector>
#include <QDebug>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
#include <QSqlRecord>
#include <QStringList>
#include <QDir>
#include <vector>
#include<QVector>

class shortcut_pro
{
public:
    int id;
    int mod;
    QString res;
    QString chi;
    int whi;
    int index;
};

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);

    bool createConnection();  //创建一个连接

    bool insert(std::string uid,std::string account,std::string password); //插入数据




    void close();
    bool isOpen();

    bool createTable_comboBox();                            //创建数据库表         下拉框用 (高+2020.4.10)
    bool insert(QString account);                         //插入数据            下拉框用(高+2020.4.10)
    bool deleteByaccount(QString account_input);          //删除数据            下拉框用(高+2020.4.10)
    bool Traverse();                                        //遍历数据库表comboBox的所有account  下拉框用(高+2020.4.10)
    void add_account();
    std::vector<QString> accounts;                        //数据库表comboBox的所有account都记录在accounts中  下拉框用(高+2020.4.10)
    bool query_comboBox(QString account_input);           //根据账号查询在数据库comboBox中是否已存在该账号  下拉框用(高+2020.4.10)

/****首页快捷方式****/
    bool createTable_shortcut();    //创建一个表
    bool insert_shortcut(int btnid,int module,QString resource,QString chinese,int whichpage,int index);         //将元素插入表中
    bool delete_shortcut();       //清空表中元素
    QVector<shortcut_pro> get_shortcut();
    bool is_shortcut_empty();       //判断数据库是不是空的


/****首页快捷方式****/

signals:

public slots:
};

#endif // DATABASE_H
