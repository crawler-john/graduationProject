#ifndef ALTEREMAIL_H
#define ALTEREMAIL_H

#include <QDialog>
#include <QPoint>
namespace Ui {
class AlterEmail;
}

class AlterEmail : public QDialog
{
    Q_OBJECT
    
public:
    explicit AlterEmail(QWidget *parent = 0);
    ~AlterEmail();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

signals:
    void sigGetNewEmail(QString newEmail);
private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::AlterEmail *ui;
};

#endif // ALTEREMAIL_H
