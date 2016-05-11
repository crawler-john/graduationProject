#ifndef ALTERADDRESS_H
#define ALTERADDRESS_H

#include <QDialog>
#include <QPoint>
#include <QMouseEvent>
namespace Ui {
class AlterAddress;
}

class AlterAddress : public QDialog
{
    Q_OBJECT
    
public:
    explicit AlterAddress(QWidget *parent = 0);
    ~AlterAddress();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
signals:
    void sigGetNewAddress(QString newAddress);
private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::AlterAddress *ui;
};

#endif // ALTERADDRESS_H
