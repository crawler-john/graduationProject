#ifndef REQUESTINFO_H
#define REQUESTINFO_H

#include <QString>
#include <QDate>
class requestInfo
{
public:
    requestInfo();

    int getID();
    void setID(int ID);
    QString getRequestName();
    void setRequestName(QString RequestName);
    QDate gettimeCreate();
    void settimeCreate(QDate timeCreate);
    int getProID();
    void setProID(int ProID);
    QString getProName();
    void setProName(QString ProName);
    QString getRequestDescribe();
    void setRequestDescribe(QString RequestDescribe);
    int getRequestType();
    void setRequestType(int RequestType);
    QString getRequestState();
    void setRequestState(QString RequestState);



private:
    int m_ID;
    QString m_RequestName;
    QDate m_timeCreate;
    int m_ProID;
    QString m_ProName;
    QString m_RequestDescribe;
    int m_RequestType;
    QString m_RequestState;
};

#endif // REQUESTINFO_H
