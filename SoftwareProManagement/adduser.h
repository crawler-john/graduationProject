#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QPoint>
#include "dbmanager.h"

namespace Ui {
class AddUser;
}

class AddUser : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddUser(DBManager *DbManager,QWidget *parent = 0);
    ~AddUser();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
signals:
    void sigAddUserInfoSuccess();

private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::AddUser *ui;
    DBManager *m_DbManager;
};

#endif // ADDUSER_H
