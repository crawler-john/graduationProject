/********************************************************************************
** Form generated from reading UI file 'monthly.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLY_H
#define UI_MONTHLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Monthly
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *Monthly)
    {
        if (Monthly->objectName().isEmpty())
            Monthly->setObjectName(QStringLiteral("Monthly"));
        Monthly->resize(400, 337);
        Monthly->setStyleSheet(QLatin1String("QDialog#Monthly{\n"
"	\n"
"	background-image:url(img/monthly.jpg);\n"
"}"));
        buttonBox = new QDialogButtonBox(Monthly);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(Monthly);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(110, 50, 256, 121));
        label = new QLabel(Monthly);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 91, 71));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));

        retranslateUi(Monthly);
        QObject::connect(buttonBox, SIGNAL(accepted()), Monthly, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Monthly, SLOT(reject()));

        QMetaObject::connectSlotsByName(Monthly);
    } // setupUi

    void retranslateUi(QDialog *Monthly)
    {
        Monthly->setWindowTitle(QApplication::translate("Monthly", "Dialog", 0));
        label->setText(QApplication::translate("Monthly", "\344\270\273\350\246\201\345\206\205\345\256\271\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Monthly: public Ui_Monthly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLY_H
