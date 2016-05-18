/********************************************************************************
** Form generated from reading UI file 'addprostaff.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROSTAFF_H
#define UI_ADDPROSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addProStaff
{
public:
    QLabel *label_12;
    QComboBox *proname;
    QTextEdit *proDescribe;
    QPushButton *BtnCancel;
    QPushButton *BtnConfirm;
    QLabel *Info;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QComboBox *name;
    QComboBox *post;
    QCheckBox *outsourcing;

    void setupUi(QDialog *addProStaff)
    {
        if (addProStaff->objectName().isEmpty())
            addProStaff->setObjectName(QStringLiteral("addProStaff"));
        addProStaff->resize(380, 336);
        addProStaff->setStyleSheet(QLatin1String("QDialog#addProStaff{\n"
"	background-image:url(img/addProStaff.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        label_12 = new QLabel(addProStaff);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 126, 111, 16));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        proname = new QComboBox(addProStaff);
        proname->setObjectName(QStringLiteral("proname"));
        proname->setGeometry(QRect(96, 88, 241, 22));
        proDescribe = new QTextEdit(addProStaff);
        proDescribe->setObjectName(QStringLiteral("proDescribe"));
        proDescribe->setGeometry(QRect(110, 190, 241, 91));
        BtnCancel = new QPushButton(addProStaff);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 300, 61, 23));
        BtnConfirm = new QPushButton(addProStaff);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 300, 61, 23));
        Info = new QLabel(addProStaff);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(30, 300, 161, 21));
        Info->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        label_2 = new QLabel(addProStaff);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_3 = new QLabel(addProStaff);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(34, 190, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label = new QLabel(addProStaff);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        name = new QComboBox(addProStaff);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(120, 58, 101, 22));
        post = new QComboBox(addProStaff);
        post->setObjectName(QStringLiteral("post"));
        post->setGeometry(QRect(140, 120, 101, 22));
        outsourcing = new QCheckBox(addProStaff);
        outsourcing->setObjectName(QStringLiteral("outsourcing"));
        outsourcing->setGeometry(QRect(40, 156, 151, 20));
        outsourcing->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));

        retranslateUi(addProStaff);

        QMetaObject::connectSlotsByName(addProStaff);
    } // setupUi

    void retranslateUi(QDialog *addProStaff)
    {
        addProStaff->setWindowTitle(QApplication::translate("addProStaff", "Dialog", 0));
        label_12->setText(QApplication::translate("addProStaff", "\346\211\200\345\234\250\351\241\271\347\233\256\350\201\214\344\275\215\357\274\232", 0));
        BtnCancel->setText(QApplication::translate("addProStaff", "\351\200\200\345\207\272", 0));
        BtnConfirm->setText(QApplication::translate("addProStaff", "\347\241\256\345\256\232", 0));
        Info->setText(QString());
        label_2->setText(QApplication::translate("addProStaff", "\351\241\271\347\233\256\344\272\272\345\221\230\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("addProStaff", "\347\233\270\345\205\263\346\217\217\350\277\260\357\274\232", 0));
        label->setText(QApplication::translate("addProStaff", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        post->clear();
        post->insertItems(0, QStringList()
         << QApplication::translate("addProStaff", "\346\231\256\351\200\232\345\221\230\345\267\245", 0)
         << QApplication::translate("addProStaff", "\351\241\271\347\233\256\347\273\217\347\220\206", 0)
        );
        outsourcing->setText(QApplication::translate("addProStaff", "\346\230\257\345\220\246\345\217\257\344\273\245\345\244\226\350\264\255", 0));
    } // retranslateUi

};

namespace Ui {
    class addProStaff: public Ui_addProStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROSTAFF_H
