#ifndef ADDPROCESS_H
#define ADDPROCESS_H

#include <QDialog>

namespace Ui {
class addProcess;
}

class addProcess : public QDialog
{
    Q_OBJECT
    
public:
    explicit addProcess(QWidget *parent = 0);
    ~addProcess();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    QPoint dragPosition;
    Ui::addProcess *ui;
};

#endif // ADDPROCESS_H
