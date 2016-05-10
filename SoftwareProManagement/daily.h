#ifndef DAILY_H
#define DAILY_H

#include <QDialog>
#include <QPoint>

namespace Ui {
class Daily;
}

class Daily : public QDialog
{
    Q_OBJECT
    
public:
    explicit Daily(QWidget *parent = 0);
    ~Daily();

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    
private slots:
    void on_buttonBox_rejected();

private:
    QPoint dragPosition;
    Ui::Daily *ui;
};

#endif // DAILY_H
