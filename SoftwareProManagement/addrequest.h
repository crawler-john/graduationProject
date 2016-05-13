#ifndef ADDREQUEST_H
#define ADDREQUEST_H

#include <QDialog>

namespace Ui {
class addRequest;
}

class addRequest : public QDialog
{
    Q_OBJECT
    
public:
    explicit addRequest(QWidget *parent = 0);
    ~addRequest();
    
private:
    Ui::addRequest *ui;
};

#endif // ADDREQUEST_H
