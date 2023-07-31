/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionws;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QWidget *tab_5;
    QTabWidget *tabWidget_4;
    QWidget *tab_6;
    QScrollBar *verticalScrollBar_2;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1004, 702);
        MainWindow->setDockNestingEnabled(false);
        actionws = new QAction(MainWindow);
        actionws->setObjectName(QString::fromUtf8("actionws"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(770, 0, 231, 401));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(210, 0, 561, 401));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tabWidget_3 = new QTabWidget(centralwidget);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 211, 621));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 10, 61, 16));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 10, 121, 21));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 80, 201, 161));
        formLayoutWidget_3 = new QWidget(groupBox_3);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(20, 33, 172, 120));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_18);

        label_19 = new QLabel(formLayoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_19);

        label_20 = new QLabel(formLayoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_20);

        lineEdit_2 = new QLineEdit(formLayoutWidget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(formLayoutWidget_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_5);

        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 250, 201, 161));
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(20, 33, 172, 120));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_16);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_6);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_7);

        lineEdit_8 = new QLineEdit(formLayoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_8);

        lineEdit_9 = new QLineEdit(formLayoutWidget_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_9);

        tabWidget_3->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_3->addTab(tab_5, QString());
        tabWidget_4 = new QTabWidget(centralwidget);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(210, 400, 551, 221));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalScrollBar_2 = new QScrollBar(tab_6);
        verticalScrollBar_2->setObjectName(QString::fromUtf8("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(540, 0, 20, 191));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 6, 541, 20));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 30, 541, 20));
        tabWidget_4->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_4->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget_4->addTab(tab_9, QString());
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(770, 410, 231, 211));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1004, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actionws);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GraphiBotics", nullptr));
        actionws->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\267\245\347\250\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\351\200\273\350\276\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\346\250\241\346\235\277\345\267\245\347\250\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "project", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207IP:", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "192.168.1.101", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\350\275\257\344\275\223\346\234\272\345\231\250\344\272\2721", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\346\267\267\345\220\210\351\230\2001\347\212\266\346\200\201", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\346\267\267\345\220\210\351\230\2003\347\212\266\346\200\201", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\346\267\267\345\220\210\351\230\2002\347\212\266\346\200\201", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\346\225\264\344\275\223\347\212\266\346\200\201", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\275\257\344\275\223\346\234\272\345\231\250\344\272\2722", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\346\267\267\345\220\210\351\230\2001\347\212\266\346\200\201", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\267\267\345\220\210\351\230\2003\347\212\266\346\200\201", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\267\267\345\220\210\351\230\2002\347\212\266\346\200\201", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\346\225\264\344\275\223\347\212\266\346\200\201", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266\345\231\250", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "14:57:29: \346\255\243\345\234\250\345\220\257\345\212\250 \" gcc -o project main.c control\" ", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "./project", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\351\227\256\351\242\230", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\350\260\203\350\257\225\346\216\247\345\210\266\345\217\260", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QCoreApplication::translate("MainWindow", "\347\273\210\347\253\257", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\237\272\346\234\254", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266\345\231\250", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
