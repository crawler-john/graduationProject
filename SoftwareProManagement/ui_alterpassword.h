/********************************************************************************
** Form generated from reading UI file 'alterpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERPASSWORD_H
#define UI_ALTERPASSWORD_H

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

class Ui_alterPassword
{
public:
    QLabel *label;
    QLabel *infosetpassword;
    QPushButton *BtnConfirm;
    QLabel *label_3;
    QLabel *errorNewPassword;
    QLabel *label_2;
    QLineEdit *oldPassword;
    QLineEdit *newPassword;
    QLineEdit *confirmPassword;
    QPushButton *BtnCancel;

    void setupUi(QDialog *alterPassword)
    {
        if (alterPassword->objectName().isEmpty())
            alterPassword->setObjectName(QStringLiteral("alterPassword"));
        alterPassword->resize(337, 186);
        alterPassword->setStyleSheet(QLatin1String("QDialog#alterPassword{\n"
"	background-image:url(img/alterPassword.jpg);\n"
"}"));
        label = new QLabel(alterPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 91, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";"));
        infosetpassword = new QLabel(alterPassword);
        infosetpassword->setObjectName(QStringLiteral("infosetpassword"));
        infosetpassword->setGeometry(QRect(240, 40, 81, 21));
        infosetpassword->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,0)"));
        BtnConfirm = new QPushButton(alterPassword);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(180, 150, 61, 23));
        label_3 = new QLabel(alterPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 91, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";"));
        errorNewPassword = new QLabel(alterPassword);
        errorNewPassword->setObjectName(QStringLiteral("errorNewPassword"));
        errorNewPassword->setGeometry(QRect(240, 80, 81, 21));
        errorNewPassword->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,0)"));
        label_2 = new QLabel(alterPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 91, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";"));
        oldPassword = new QLineEdit(alterPassword);
        oldPassword->setObjectName(QStringLiteral("oldPassword"));
        oldPassword->setGeometry(QRect(120, 40, 113, 20));
        newPassword = new QLineEdit(alterPassword);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setGeometry(QRect(120, 80, 113, 20));
        confirmPassword = new QLineEdit(alterPassword);
        confirmPassword->setObjectName(QStringLiteral("confirmPassword"));
        confirmPassword->setGeometry(QRect(120, 120, 113, 20));
        BtnCancel = new QPushButton(alterPassword);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(250, 150, 61, 23));

        retranslateUi(alterPassword);

        QMetaObject::connectSlotsByName(alterPassword);
    } // setupUi

    void retranslateUi(QDialog *alterPassword)
    {
        alterPassword->setWindowTitle(QApplication::translate("alterPassword", "Dialog", 0));
        label->setText(QApplication::translate("alterPassword", "\345\216\237  \345\257\206  \347\240\201\357\274\232", 0));
        infosetpassword->setText(QString());
        BtnConfirm->setText(QApplication::translate("alterPassword", "\347\241\256\345\256\232", 0));
        label_3->setText(QApplication::translate("alterPassword", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        errorNewPassword->setText(QString());
        label_2->setText(QApplication::translate("alterPassword", "\346\226\260  \345\257\206  \347\240\201\357\274\232", 0));
        BtnCancel->setText(QApplication::translate("alterPassword", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class alterPassword: public Ui_alterPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERPASSWORD_H
