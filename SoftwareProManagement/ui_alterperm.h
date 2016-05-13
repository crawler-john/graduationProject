/********************************************************************************
** Form generated from reading UI file 'alterperm.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERPERM_H
#define UI_ALTERPERM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_alterPerm
{
public:
    QLabel *dailyInfo;
    QPushButton *BtnCancel;
    QPushButton *BtnConfirm;

    void setupUi(QDialog *alterPerm)
    {
        if (alterPerm->objectName().isEmpty())
            alterPerm->setObjectName(QStringLiteral("alterPerm"));
        alterPerm->resize(380, 400);
        alterPerm->setStyleSheet(QLatin1String("QDialog#alterPerm{\n"
"	background-image:url(img/alterPerm.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        dailyInfo = new QLabel(alterPerm);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(10, 360, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        BtnCancel = new QPushButton(alterPerm);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(300, 360, 61, 23));
        BtnConfirm = new QPushButton(alterPerm);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(230, 360, 61, 23));

        retranslateUi(alterPerm);

        QMetaObject::connectSlotsByName(alterPerm);
    } // setupUi

    void retranslateUi(QDialog *alterPerm)
    {
        alterPerm->setWindowTitle(QApplication::translate("alterPerm", "Dialog", 0));
        dailyInfo->setText(QString());
        BtnCancel->setText(QApplication::translate("alterPerm", "\351\200\200\345\207\272", 0));
        BtnConfirm->setText(QApplication::translate("alterPerm", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class alterPerm: public Ui_alterPerm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERPERM_H
