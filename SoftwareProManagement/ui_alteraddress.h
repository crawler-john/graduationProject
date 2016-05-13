/********************************************************************************
** Form generated from reading UI file 'alteraddress.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERADDRESS_H
#define UI_ALTERADDRESS_H

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

class Ui_AlterAddress
{
public:
    QPushButton *BtnConfirm;
    QPushButton *BtnCancel;
    QLineEdit *newAddress;
    QLabel *label;
    QLabel *errorInfo;

    void setupUi(QDialog *AlterAddress)
    {
        if (AlterAddress->objectName().isEmpty())
            AlterAddress->setObjectName(QStringLiteral("AlterAddress"));
        AlterAddress->resize(336, 142);
        AlterAddress->setStyleSheet(QLatin1String("QDialog#AlterAddress{\n"
"	background-image:url(img/alterAddress.jpg);\n"
"}"));
        BtnConfirm = new QPushButton(AlterAddress);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(200, 100, 61, 23));
        BtnCancel = new QPushButton(AlterAddress);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(270, 100, 61, 23));
        newAddress = new QLineEdit(AlterAddress);
        newAddress->setObjectName(QStringLiteral("newAddress"));
        newAddress->setGeometry(QRect(142, 60, 171, 20));
        label = new QLabel(AlterAddress);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 91, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";"));
        errorInfo = new QLabel(AlterAddress);
        errorInfo->setObjectName(QStringLiteral("errorInfo"));
        errorInfo->setGeometry(QRect(40, 100, 111, 21));
        errorInfo->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,0)"));

        retranslateUi(AlterAddress);

        QMetaObject::connectSlotsByName(AlterAddress);
    } // setupUi

    void retranslateUi(QDialog *AlterAddress)
    {
        AlterAddress->setWindowTitle(QApplication::translate("AlterAddress", "Dialog", 0));
        BtnConfirm->setText(QApplication::translate("AlterAddress", "\347\241\256\345\256\232", 0));
        BtnCancel->setText(QApplication::translate("AlterAddress", "\351\200\200\345\207\272", 0));
        newAddress->setText(QString());
        label->setText(QApplication::translate("AlterAddress", "\346\226\260  \345\234\260  \345\235\200\357\274\232", 0));
        errorInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlterAddress: public Ui_AlterAddress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERADDRESS_H
