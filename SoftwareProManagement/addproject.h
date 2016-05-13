#ifndef ADDPROJECT_H
#define ADDPROJECT_H

#include <QDialog>
#include "dbmanager.h"
namespace Ui {
class AddProject;
}

class AddProject : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddProject(DBManager *DbManager,QWidget *parent = 0);
    ~AddProject();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void sigAddProInfoSuccess();

private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::AddProject *ui;

    DBManager *m_DbManager;
};

#endif // ADDPROJECT_H
