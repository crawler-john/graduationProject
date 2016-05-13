/********************************************************************************
** Form generated from reading UI file 'alterphone.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERPHONE_H
#define UI_ALTERPHONE_H

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

class Ui_AlterPhone
{
public:
    QPushButton *BtnConfirm;
    QPushButton *BtnCancel;
    QLineEdit *newPhone;
    QLabel *label;
    QLabel *errorInfo;

    void setupUi(QDialog *AlterPhone)
    {
        if (AlterPhone->objectName().isEmpty())
            AlterPhone->setObjectName(QStringLiteral("AlterPhone"));
        AlterPhone->resize(336, 114);
        AlterPhone->setStyleSheet(QLatin1String("QDialog#AlterPhone{\n"
"	background-image:url(img/alterPhone.jpg);\n"
"}"));
        BtnConfirm = new QPushButton(AlterPhone);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(190, 80, 61, 23));
        BtnCancel = new QPushButton(AlterPhone);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(260, 80, 61, 23));
        newPhone = new QLineEdit(AlterPhone);
        newPhone->setObjectName(QStringLiteral("newPhone"));
        newPhone->setGeometry(QRect(160, 50, 131, 20));
        label = new QLabel(AlterPhone);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 91, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";"));
        errorInfo = new QLabel(AlterPhone);
        errorInfo->setObjectName(QStringLiteral("errorInfo"));
        errorInfo->setGeometry(QRect(60, 80, 111, 21));
        errorInfo->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,0)"));

        retranslateUi(AlterPhone);

        QMetaObject::connectSlotsByName(AlterPhone);
    } // setupUi

    void retranslateUi(QDialog *AlterPhone)
    {
        AlterPhone->setWindowTitle(QApplication::translate("AlterPhone", "Dialog", 0));
        BtnConfirm->setText(QApplication::translate("AlterPhone", "\347\241\256\345\256\232", 0));
        BtnCancel->setText(QApplication::translate("AlterPhone", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("AlterPhone", "\346\226\260  \347\224\265  \350\257\235\357\274\232", 0));
        errorInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlterPhone: public Ui_AlterPhone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERPHONE_H
