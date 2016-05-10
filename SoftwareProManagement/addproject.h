#ifndef ADDPROJECT_H
#define ADDPROJECT_H

#include <QDialog>

namespace Ui {
class AddProject;
}

class AddProject : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddProject(QWidget *parent = 0);
    ~AddProject();
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

private:
    QPoint dragPosition;
    Ui::AddProject *ui;
};

#endif // ADDPROJECT_H
