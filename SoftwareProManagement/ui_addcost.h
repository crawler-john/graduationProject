/********************************************************************************
** Form generated from reading UI file 'addcost.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOST_H
#define UI_ADDCOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addCost
{
public:
    QLabel *label_3;
    QLineEdit *title;
    QLabel *label_2;
    QTextEdit *Describe;
    QLabel *dailyInfo;
    QPushButton *BtnCancel;
    QPushButton *BtnConfirm;
    QComboBox *proName;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *money;
    QLabel *Info;

    void setupUi(QDialog *addCost)
    {
        if (addCost->objectName().isEmpty())
            addCost->setObjectName(QStringLiteral("addCost"));
        addCost->resize(379, 284);
        addCost->setStyleSheet(QLatin1String("QDialog#addCost{\n"
"	background-image:url(img/addCost.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        label_3 = new QLabel(addCost);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        title = new QLineEdit(addCost);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(100, 64, 91, 20));
        label_2 = new QLabel(addCost);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 64, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        Describe = new QTextEdit(addCost);
        Describe->setObjectName(QStringLiteral("Describe"));
        Describe->setGeometry(QRect(106, 170, 261, 51));
        dailyInfo = new QLabel(addCost);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(20, 340, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        BtnCancel = new QPushButton(addCost);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 240, 61, 23));
        BtnConfirm = new QPushButton(addCost);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 240, 61, 23));
        proName = new QComboBox(addCost);
        proName->setObjectName(QStringLiteral("proName"));
        proName->setGeometry(QRect(96, 92, 261, 22));
        label = new QLabel(addCost);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 94, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_4 = new QLabel(addCost);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 126, 101, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        money = new QSpinBox(addCost);
        money->setObjectName(QStringLiteral("money"));
        money->setGeometry(QRect(120, 130, 131, 22));
        Info = new QLabel(addCost);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(40, 240, 161, 21));
        Info->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));

        retranslateUi(addCost);

        QMetaObject::connectSlotsByName(addCost);
    } // setupUi

    void retranslateUi(QDialog *addCost)
    {
        addCost->setWindowTitle(QApplication::translate("addCost", "Dialog", 0));
        label_3->setText(QApplication::translate("addCost", "\347\224\250\351\200\224\346\217\217\350\277\260\357\274\232", 0));
        label_2->setText(QApplication::translate("addCost", "\346\240\207\351\242\230\357\274\232", 0));
        dailyInfo->setText(QString());
        BtnCancel->setText(QApplication::translate("addCost", "\351\200\200\345\207\272", 0));
        BtnConfirm->setText(QApplication::translate("addCost", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("addCost", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        label_4->setText(QApplication::translate("addCost", "\346\266\210\350\264\271\351\207\221\351\242\235\357\274\232", 0));
        Info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addCost: public Ui_addCost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOST_H
