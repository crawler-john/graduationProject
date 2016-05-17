#ifndef ADDREQUEST_H
#define ADDREQUEST_H

#include <QDialog>
#include "dbmanager.h"
namespace Ui {
class addRequest;
}

class addRequest : public QDialog
{
    Q_OBJECT
    
public:
    explicit addRequest(DBManager *DbManager,QString proName,QWidget *parent = 0);
    ~addRequest();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:
    void sigAddProRequestInfoSuccess();

private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::addRequest *ui;
    DBManager *m_dbmanager;
    QString m_proName;
};

#endif // ADDREQUEST_H
