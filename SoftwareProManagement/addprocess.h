#ifndef ADDPROCESS_H
#define ADDPROCESS_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class addProcess;
}

class addProcess : public QDialog
{
    Q_OBJECT
    
public:
    explicit addProcess(DBManager *DbManager,QString proName,QWidget *parent = 0);
    ~addProcess();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void sigAddProProcessInfoSuccess();
private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::addProcess *ui;
    DBManager *m_dbmanager;
    QString m_proName;
};

#endif // ADDPROCESS_H
