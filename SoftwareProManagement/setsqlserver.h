#ifndef SETSQLSERVER_H
#define SETSQLSERVER_H

#include <QDialog>
#include <dbmanager.h>
#include <QPoint>

class SetSQLServer : public QDialog
{
    Q_OBJECT
public:
    explicit SetSQLServer(QWidget *parent = 0);
    
signals:
    
public slots:


protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);




private:
    QPoint dragPosition;
    
};

#endif // SETSQLSERVER_H
