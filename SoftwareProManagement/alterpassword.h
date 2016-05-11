#ifndef ALTERPASSWORD_H
#define ALTERPASSWORD_H

#include <QDialog>
#include <QPoint>

namespace Ui {
class alterPassword;
}

class alterPassword : public QDialog
{
    Q_OBJECT
    
public:
    explicit alterPassword(QString oldPassword,QWidget *parent = 0);
    ~alterPassword();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

signals:
    void sigGetNewPassword(QString newPassword);

private slots:
    void on_BtnConfirm_clicked();
    void SlotAlterPassword(bool status);

private:
    QString oldPassword;
    QPoint dragPosition;
    Ui::alterPassword *ui;
};

#endif // ALTERPASSWORD_H
