#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dbmanager.h>
#include <QPoint>
#include <QTreeWidgetItem>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(DBManager *DbManager,QWidget *parent = 0);
    ~MainWindow();


    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
private:
    DBManager *DbManager;
    QPoint dragPosition;
private:
    Ui::MainWindow *ui;
signals:
    void SigSelectStackedWidget(int);
public slots:
    void SlotTreeWidgetClick(QTreeWidgetItem * item, int column);
private slots:
    void on_BtnLoginOutSystem_clicked();
    void on_BtnReLogin_clicked();
    void on_BtnClose_clicked();
};

#endif // MAINWINDOW_H
