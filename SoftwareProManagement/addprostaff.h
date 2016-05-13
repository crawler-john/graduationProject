#ifndef ADDPROSTAFF_H
#define ADDPROSTAFF_H

#include <QDialog>

namespace Ui {
class addProStaff;
}

class addProStaff : public QDialog
{
    Q_OBJECT
    
public:
    explicit addProStaff(QWidget *parent = 0);
    ~addProStaff();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    QPoint dragPosition;
    Ui::addProStaff *ui;
};

#endif // ADDPROSTAFF_H
