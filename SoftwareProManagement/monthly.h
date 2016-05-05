#ifndef MONTHLY_H
#define MONTHLY_H

#include <QDialog>

namespace Ui {
class Monthly;
}

class Monthly : public QDialog
{
    Q_OBJECT
    
public:
    explicit Monthly(QWidget *parent = 0);
    ~Monthly();
    
private:
    Ui::Monthly *ui;
};

#endif // MONTHLY_H
