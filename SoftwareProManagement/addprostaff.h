#ifndef ADDPROSTAFF_H
#define ADDPROSTAFF_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class addProStaff;
}

class addProStaff : public QDialog
{
    Q_OBJECT
    
public:
    explicit addProStaff(DBManager *DbManager,QString proName,QWidget *parent = 0);
    ~addProStaff();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:
    void sigAddProStaffInfoSuccess();


private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::addProStaff *ui;
    DBManager *m_dbmanager;
    QString m_proName;
};

#endif // ADDPROSTAFF_H
