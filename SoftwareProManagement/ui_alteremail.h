/********************************************************************************
** Form generated from reading UI file 'alteremail.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTEREMAIL_H
#define UI_ALTEREMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AlterEmail
{
public:
    QPushButton *BtnConfirm;
    QPushButton *BtnCancel;
    QLineEdit *newEmail;
    QLabel *label;
    QLabel *errorInfo;

    void setupUi(QDialog *AlterEmail)
    {
        if (AlterEmail->objectName().isEmpty())
            AlterEmail->setObjectName(QStringLiteral("AlterEmail"));
        AlterEmail->resize(339, 125);
        AlterEmail->setStyleSheet(QLatin1String("QDialog#AlterEmail{\n"
"	background-image:url(img/alterEmail.jpg);\n"
"}"));
        BtnConfirm = new QPushButton(AlterEmail);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(190, 90, 61, 23));
        BtnCancel = new QPushButton(AlterEmail);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(260, 90, 61, 23));
        newEmail = new QLineEdit(AlterEmail);
        newEmail->setObjectName(QStringLiteral("newEmail"));
        newEmail->setGeometry(QRect(150, 50, 131, 20));
        label = new QLabel(AlterEmail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 91, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";"));
        errorInfo = new QLabel(AlterEmail);
        errorInfo->setObjectName(QStringLiteral("errorInfo"));
        errorInfo->setGeometry(QRect(50, 90, 111, 21));
        errorInfo->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,0)"));

        retranslateUi(AlterEmail);

        QMetaObject::connectSlotsByName(AlterEmail);
    } // setupUi

    void retranslateUi(QDialog *AlterEmail)
    {
        AlterEmail->setWindowTitle(QApplication::translate("AlterEmail", "Dialog", 0));
        BtnConfirm->setText(QApplication::translate("AlterEmail", "\347\241\256\345\256\232", 0));
        BtnCancel->setText(QApplication::translate("AlterEmail", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("AlterEmail", "\346\226\260  \351\202\256  \347\256\261\357\274\232", 0));
        errorInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlterEmail: public Ui_AlterEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTEREMAIL_H
