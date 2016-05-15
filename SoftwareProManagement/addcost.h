#ifndef ADDCOST_H
#define ADDCOST_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class addCost;
}

class addCost : public QDialog
{
    Q_OBJECT
    
public:
    explicit addCost(DBManager *DbManager,QString proName,QWidget *parent = 0);
    ~addCost();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:
    void sigAddProCostInfoSuccess();
private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::addCost *ui;
    DBManager *m_dbmanager;
    QString m_proName;
};

#endif // ADDCOST_H
