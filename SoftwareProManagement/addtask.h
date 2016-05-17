#ifndef ADDTASK_H
#define ADDTASK_H

#include <QDialog>
#include "dbmanager.h"
namespace Ui {
class addTask;
}

class addTask : public QDialog
{
    Q_OBJECT
    
public:
    explicit addTask(DBManager *DbManager,QString proName,QWidget *parent = 0);
    ~addTask();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:
    void sigAddProTaskInfoSuccess();

private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::addTask *ui;
    DBManager *m_dbmanager;
    QString m_proName;
};

#endif // ADDTASK_H
