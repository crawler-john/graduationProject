/********************************************************************************
** Form generated from reading UI file 'addprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROCESS_H
#define UI_ADDPROCESS_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addProcess
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *processName;
    QLabel *label_3;
    QPushButton *BtnConfirm;
    QPushButton *BtnCancel;
    QLabel *Info;
    QTextEdit *Describe;
    QComboBox *proName;
    QLabel *label_4;
    QComboBox *processTaskName;

    void setupUi(QDialog *addProcess)
    {
        if (addProcess->objectName().isEmpty())
            addProcess->setObjectName(QStringLiteral("addProcess"));
        addProcess->resize(379, 252);
        addProcess->setStyleSheet(QLatin1String("QDialog#addProcess{\n"
"	background-image:url(img/addProcess.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        label = new QLabel(addProcess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(24, 70, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_2 = new QLabel(addProcess);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(24, 40, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        processName = new QLineEdit(addProcess);
        processName->setObjectName(QStringLiteral("processName"));
        processName->setGeometry(QRect(94, 40, 91, 20));
        label_3 = new QLabel(addProcess);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(24, 140, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        BtnConfirm = new QPushButton(addProcess);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(234, 210, 61, 23));
        BtnCancel = new QPushButton(addProcess);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(304, 210, 61, 23));
        Info = new QLabel(addProcess);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(14, 210, 161, 21));
        Info->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        Describe = new QTextEdit(addProcess);
        Describe->setObjectName(QStringLiteral("Describe"));
        Describe->setGeometry(QRect(100, 140, 261, 51));
        proName = new QComboBox(addProcess);
        proName->setObjectName(QStringLiteral("proName"));
        proName->setGeometry(QRect(90, 68, 261, 22));
        label_4 = new QLabel(addProcess);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(24, 102, 141, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        processTaskName = new QComboBox(addProcess);
        processTaskName->setObjectName(QStringLiteral("processTaskName"));
        processTaskName->setGeometry(QRect(160, 100, 191, 22));

        retranslateUi(addProcess);

        QMetaObject::connectSlotsByName(addProcess);
    } // setupUi

    void retranslateUi(QDialog *addProcess)
    {
        addProcess->setWindowTitle(QApplication::translate("addProcess", "Dialog", 0));
        label->setText(QApplication::translate("addProcess", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\346\217\217\350\277\260\357\274\232", 0));
        BtnConfirm->setText(QApplication::translate("addProcess", "\347\241\256\345\256\232", 0));
        BtnCancel->setText(QApplication::translate("addProcess", "\351\200\200\345\207\272", 0));
        Info->setText(QString());
        label_4->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\347\256\241\347\220\206\347\232\204\344\273\273\345\212\241\345\220\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class addProcess: public Ui_addProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROCESS_H
