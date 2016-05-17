#ifndef PROCESSINFO_H
#define PROCESSINFO_H

#include <QString>
#include <QDate>
class ProcessInfo
{
public:
    ProcessInfo();

    int getID();
    void setID(int ID);

    int getproID();
    void setproID(int proID);

    QString getproName();
    void setproName(QString proName);
    QDate gettimeCreate();
    void settimeCreate(QDate timeCreate);
    int gettaskID();
    void settaskID(int taskID);
    QString gettaskName();
    void settaskName(QString taskName);
    QString getprocessName();
    void setprocessName(QString processName);
    QString getprocessDescribe();
    void setprocessDescribe(QString processDescribe);


private:
    int m_ID;
    int m_proID;
    QString m_proName;
    QDate m_timeCreate;
    int m_taskID;
    QString m_taskName;
    QString m_processName;
    QString m_processDescribe;



};

#endif // PROCESSINFO_H
