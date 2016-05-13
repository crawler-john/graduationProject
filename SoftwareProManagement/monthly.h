#ifndef MONTHLY_H
#define MONTHLY_H

#include <QDialog>
#include <QPoint>

namespace Ui {
class Monthly;
}

class Monthly : public QDialog
{
    Q_OBJECT
    
public:
    explicit Monthly(QWidget *parent = 0);
    ~Monthly();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

private slots:
    void on_BtnConfirm_clicked();
signals:

    void SigAddMonthly(QString Content,QString Problem,QString Solution,QString Nextplan);


private:
    QPoint dragPosition;
    Ui::Monthly *ui;
};

#endif // MONTHLY_H
