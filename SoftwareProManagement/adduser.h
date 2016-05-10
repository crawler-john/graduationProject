#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QPoint>

namespace Ui {
class AddUser;
}

class AddUser : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddUser(QWidget *parent = 0);
    ~AddUser();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

private:
    QPoint dragPosition;
    Ui::AddUser *ui;
};

#endif // ADDUSER_H
