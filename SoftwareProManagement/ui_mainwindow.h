/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_2;
    QLabel *label;
    QPushButton *BtnReLogin;
    QPushButton *BtnLoginOutSystem;
    QLabel *label_username;
    QPushButton *BtnClose;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QFrame *frame_2;
    QWidget *page_14;
    QGroupBox *groupBox;
    QLabel *label_2;
    QWidget *page_15;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QWidget *page_4;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QWidget *page_5;
    QGroupBox *groupBox_5;
    QLabel *label_5;
    QWidget *page_2;
    QGroupBox *groupBox_6;
    QLabel *label_6;
    QWidget *page_6;
    QGroupBox *groupBox_7;
    QLabel *label_7;
    QWidget *page_7;
    QGroupBox *groupBox_8;
    QLabel *label_8;
    QWidget *page_3;
    QGroupBox *groupBox_9;
    QLabel *label_9;
    QPushButton *btnAddDaily;
    QWidget *page_8;
    QGroupBox *groupBox_11;
    QLabel *label_10;
    QWidget *page_9;
    QGroupBox *groupBox_12;
    QLabel *label_11;
    QWidget *page_10;
    QGroupBox *groupBox_13;
    QLabel *label_12;
    QWidget *page_11;
    QGroupBox *groupBox_14;
    QLabel *label_13;
    QWidget *page_12;
    QGroupBox *groupBox_15;
    QLabel *label_18;
    QWidget *page_13;
    QGroupBox *groupBox_16;
    QLabel *label_15;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 474);
        MainWindow->setStyleSheet(QLatin1String("QWidget#centralwidget{\n"
"	\n"
"	background-image:url(img/mainwindow.jpg);\n"
"}\n"
"QGroupBox::title {\n"
"	color:#ff0000\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 104, 131, 371));
        treeWidget->setStyleSheet(QLatin1String("QTreeWidget{\n"
"background:transparent\n"
"}\n"
"QTreeWidget::item{border:0px solid gray;padding-left:8px;}\n"
"QTreeWidget::item:!selected{}\n"
"QTreeWidget::item:selected:active{background:#FFFFFF;color:#19649F;}\n"
"QTreeWidget::item:selected{background:#FFFFFF;color:#19649F;}\n"
"QTreeWidget::item:hover{color:#B0171F;}"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 9, 131, 91));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox::title{\n"
"font: 75 14pt \"Agency FB\";\n"
"}"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 51, 16));
        BtnReLogin = new QPushButton(groupBox_2);
        BtnReLogin->setObjectName(QStringLiteral("BtnReLogin"));
        BtnReLogin->setGeometry(QRect(6, 54, 61, 23));
        BtnReLogin->setStyleSheet(QLatin1String("QPushButton#BtnReLogin{\n"
"color:#0000ff;\n"
"border:6px;\n"
"solid #FFFFFF;\n"
"}\n"
"QPushButton#BtnReLogin:hover{color:#FF0000;}\n"
""));
        BtnLoginOutSystem = new QPushButton(groupBox_2);
        BtnLoginOutSystem->setObjectName(QStringLiteral("BtnLoginOutSystem"));
        BtnLoginOutSystem->setGeometry(QRect(67, 54, 61, 23));
        BtnLoginOutSystem->setStyleSheet(QLatin1String("QPushButton#BtnLoginOutSystem{\n"
"color:#0000ff;\n"
"border:6px;\n"
"solid #FFFFFF;\n"
"}\n"
"QPushButton#BtnLoginOutSystem:hover{color:#FF0000;}\n"
"\n"
""));
        label_username = new QLabel(groupBox_2);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(60, 18, 61, 31));
        label_username->setStyleSheet(QString::fromUtf8("color:red;\n"
"font: 75 14pt \"\346\226\260\345\256\213\344\275\223\";\n"
"\n"
""));
        BtnClose = new QPushButton(centralwidget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setGeometry(QRect(770, 0, 29, 29));
        BtnClose->setStyleSheet(QLatin1String("\n"
"QPushButton#BtnClose:active {\n"
"background-image:url(img/close.png);\n"
"}\n"
"QPushButton#BtnClose:!selected {\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 24, 661, 451));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 50, 361, 121));
        frame->setStyleSheet(QStringLiteral("background-image:url(img/welcome.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(page);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(80, 170, 341, 41));
        frame_2->setStyleSheet(QStringLiteral("background-image:url(img/welcomeOperation.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        groupBox = new QGroupBox(page_14);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 661, 451));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 80, 54, 12));
        stackedWidget->addWidget(page_14);
        page_15 = new QWidget();
        page_15->setObjectName(QStringLiteral("page_15"));
        groupBox_3 = new QGroupBox(page_15);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 661, 451));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 60, 54, 12));
        stackedWidget->addWidget(page_15);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 661, 451));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 271, 16));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_5 = new QGroupBox(page_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 661, 451));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 271, 16));
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_6 = new QGroupBox(page_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 661, 451));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 40, 291, 16));
        stackedWidget->addWidget(page_2);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        groupBox_7 = new QGroupBox(page_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 0, 661, 451));
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 40, 241, 20));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_8 = new QGroupBox(page_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 0, 661, 451));
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 30, 54, 12));
        stackedWidget->addWidget(page_7);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_9 = new QGroupBox(page_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 0, 661, 451));
        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 30, 54, 12));
        btnAddDaily = new QPushButton(groupBox_9);
        btnAddDaily->setObjectName(QStringLiteral("btnAddDaily"));
        btnAddDaily->setGeometry(QRect(110, 30, 75, 23));
        stackedWidget->addWidget(page_3);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_11 = new QGroupBox(page_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(0, 0, 661, 451));
        label_10 = new QLabel(groupBox_11);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 20, 54, 12));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        groupBox_12 = new QGroupBox(page_9);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(0, 0, 661, 451));
        label_11 = new QLabel(groupBox_12);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 20, 241, 20));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        groupBox_13 = new QGroupBox(page_10);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(0, 0, 661, 451));
        label_12 = new QLabel(groupBox_13);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 20, 241, 20));
        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        groupBox_14 = new QGroupBox(page_11);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(0, 0, 661, 451));
        label_13 = new QLabel(groupBox_14);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 50, 54, 12));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        groupBox_15 = new QGroupBox(page_12);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(0, 0, 661, 451));
        label_18 = new QLabel(groupBox_15);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(110, 100, 54, 12));
        stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        groupBox_16 = new QGroupBox(page_13);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(0, 0, 661, 451));
        label_15 = new QLabel(groupBox_16);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 20, 91, 16));
        stackedWidget->addWidget(page_13);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\347\233\270\345\205\263\346\223\215\344\275\234", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\344\270\252\344\272\272\351\241\271\347\233\256\346\223\215\344\275\234", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\346\210\221\347\232\204\351\241\271\347\233\256", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\346\210\221\347\232\204\344\273\273\345\212\241", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "\351\241\271\347\233\256\350\247\206\345\233\276", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "\351\241\271\347\233\256\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem4->child(1);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "\351\241\271\347\233\256\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem4->child(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "\346\210\220\346\234\254\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem4->child(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "\351\234\200\346\261\202\344\273\273\345\212\241\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem4->child(4);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "\350\277\233\345\272\246\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem4->child(5);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "\345\221\250\346\212\245", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem4->child(6);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "\351\241\271\347\233\256\346\234\210\346\212\245", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "\345\237\272\346\234\254\344\277\241\346\201\257", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem12->child(0);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "\346\234\272\346\236\204\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem12->child(1);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem12->child(2);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "\350\247\222\350\211\262\347\256\241\347\220\206", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem12->child(3);
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "\347\231\273\345\275\225\347\224\250\346\210\267", 0));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem12->child(4);
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\231\273\345\275\225\347\224\250\346\210\267\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        BtnReLogin->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\347\231\273\345\275\225", 0));
        BtnLoginOutSystem->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        label_username->setText(QString());
        BtnClose->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\210\221\347\232\204\351\241\271\347\233\256", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\351\241\271\347\233\256", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\210\221\347\232\204\344\273\273\345\212\241", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\344\273\273\345\212\241", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\351\241\271\347\233\256\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        label_4->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\351\241\271\347\233\256\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        label_5->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\210\220\346\234\254\347\256\241\347\220\206", 0));
        label_6->setText(QApplication::translate("MainWindow", "\346\210\220\346\234\254\347\256\241\347\220\206", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\351\234\200\346\261\202\344\273\273\345\212\241\347\256\241\347\220\206", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\234\200\346\261\202\344\273\273\345\212\241\347\256\241\347\220\206", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\350\277\233\345\272\246\347\256\241\347\220\206", 0));
        label_8->setText(QApplication::translate("MainWindow", "\350\277\233\345\272\246\347\256\241\347\220\206", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\345\221\250\346\212\245", 0));
        label_9->setText(QApplication::translate("MainWindow", "\345\221\250\346\212\245", 0));
        btnAddDaily->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\221\250\346\212\245", 0));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\351\241\271\347\233\256\346\234\210\346\212\245", 0));
        label_10->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\346\234\210\346\212\245", 0));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\346\234\272\346\236\204\347\256\241\347\220\206", 0));
        label_11->setText(QApplication::translate("MainWindow", "\346\234\272\346\236\204\347\256\241\347\220\206", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        label_12->setText(QApplication::translate("MainWindow", "\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "\350\247\222\350\211\262\347\256\241\347\220\206", 0));
        label_13->setText(QApplication::translate("MainWindow", "\350\247\222\350\211\262\347\256\241\347\220\206", 0));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "\347\231\273\345\275\225\347\224\250\346\210\267", 0));
        label_18->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\347\224\250\346\210\267", 0));
        groupBox_16->setTitle(QApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", 0));
        label_15->setText(QApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
