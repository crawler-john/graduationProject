#ifndef TASKINFO_H
#define TASKINFO_H

#include <QString>
#include <QDate>

class Taskinfo
{
public:
    Taskinfo();

    int getID();
    void setID(int ID);
    int getrequestTask();
    void setrequestTask(int requestTask);
    QString getrequestName();
    void setrequestName(QString requestName);
    int getproID();
    void setproID(int proID);

    QString getProName();
    void setProName(QString ProName);

    QDate gettimeCreate();
    void settimeCreate(QDate timeCreate);
    QString gettaskName();
    void settaskName(QString taskName);

    QString gettaskExecutorName();
    void settaskExecutorName(QString taskExecutorName);


    int gettaskPriority();
    void settaskPriority(int taskPriority);

    QString gettaskDescribe();
    void settaskDescribe(QString taskDescribe);
    QDate gettimePlanStart();
    void settimePlanStart(QDate timePlanStart);
    QDate gettimePlanEnd();
    void settimePlanEnd(QDate timePlanEnd);
    QString gettaskExecutorID();
    void settaskExecutorID(QString taskExecutorID);

private:
    int m_ID;
    int m_requestTask;
    QString m_requestName;
    int m_proID;
    QString m_ProName;
    QDate m_timeCreate;
    QString m_taskName;
    QString m_taskExecutorID;
    QString m_taskExecutorName;

    int m_taskPriority;
    QString m_taskDescribe;
    QDate m_timePlanStart;
    QDate m_timePlanEnd;



};

#endif // TASKINFO_H
