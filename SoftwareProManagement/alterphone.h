#ifndef ALTERPHONE_H
#define ALTERPHONE_H

#include <QDialog>
#include <QPoint>
namespace Ui {
class AlterPhone;
}

class AlterPhone : public QDialog
{
    Q_OBJECT
    
public:
    explicit AlterPhone(QWidget *parent = 0);
    ~AlterPhone();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

signals:
    void sigGetNewPhone(QString newPhone);
private slots:
    void on_BtnConfirm_clicked();

private:
    QPoint dragPosition;
    Ui::AlterPhone *ui;
};

#endif // ALTERPHONE_H
