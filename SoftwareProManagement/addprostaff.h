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
    
private:
    Ui::addProStaff *ui;
};

#endif // ADDPROSTAFF_H
