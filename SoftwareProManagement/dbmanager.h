#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>      //数据库操作类
#include <QSqlQuery>         //执行和操作SQL语句类
#include <QDebug>
#include <QStringList>

class DBManager
{
public:
    DBManager(QString HostAddress);


    bool DBopen();
    bool DBclose();


private:
    QStringList m_sqlDriver;
    QSqlDatabase m_db;
    QSqlQuery m_sql;
    bool m_dbFlag;
    QString m_hostAddress;
};

#endif // DBMANAGER_H
