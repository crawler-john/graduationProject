/****************************************************************************
** Form implementation generated from reading ui file 'form1.ui'
**
** Created: 三  1月 30 15:49:57 2008
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.1.1   edited Nov 21 17:40 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "form1.h"

#include <qvariant.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a Form1 as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
Form1::Form1( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
 setName( "Form1" );

    lineEdit1 = new QLineEdit( this, "lineEdit1" );
    lineEdit1->setGeometry( QRect( 70, 100, 211, 71 ) );

    pushButton1 = new QPushButton( this, "pushButton1" );
    pushButton1->setGeometry( QRect( 110, 210, 101, 31 ) );
    languageChange();
    resize( QSize(600, 480).expandedTo(minimumSizeHint()) );

    // signals and slots connections
    connect( pushButton1, SIGNAL( clicked() ), this, SLOT( adjustSize() ) );
    connect( pushButton1,SIGNAL(clicked()),this,SLOT(transfer()));
}

/*
 *  Destroys the object and frees any allocated resources
 */
Form1::~Form1()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Form1::languageChange()
{
    setCaption( tr( "Form1" ) );
    pushButton1->setText( tr( "pushButton1" ) );
}

void Form1::transfer()
{
    ss=lineEdit1->text();
    file.setName("transfer.data");
    if(!file.open(IO_WriteOnly))
      {
         QMessageBox::warning(this,tr("transfer"),tr("cannot write the file"));
         return;
      }
    ftp.connectToHost(ss);

    ftp.login();
    ftp.cd("/topsecret/csv");
    ftp.get("transfer.data",&file);
    ftp.close();
    file.close();
}
