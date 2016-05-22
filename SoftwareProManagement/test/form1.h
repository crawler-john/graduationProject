/****************************************************************************
** Form interface generated from reading ui file 'form1.ui'
**
** Created: 三  1月 30 15:49:45 2008
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.1.1   edited Nov 21 17:40 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef FORM1_H
#define FORM1_H

#include <qvariant.h>
#include <qwidget.h>
#include <qftp.h>
#include <qmessagebox.h>
#include <qfile.h>
#include <qstring.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QLineEdit;
class QPushButton;

class Form1 : public QWidget
{
    Q_OBJECT

public:
    Form1( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Form1();

    QLineEdit* lineEdit1;
    QPushButton* pushButton1;

protected:

private:
    QFtp ftp;
    QFile file;
    QString ss;

protected slots:
    virtual void languageChange();
    virtual void transfer();
};

#endif // FORM1_H
