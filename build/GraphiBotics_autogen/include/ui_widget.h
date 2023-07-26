/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *SideBar;
    QWidget *page_1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *newpjbtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *openpjbtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *getpjbtn;
    QFrame *line;
    QTableWidget *tableWidget;
    QWidget *page_3;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page;
    QLabel *label_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QToolButton *toolButton_4;
    QToolButton *toolButton_1;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 532);
        SideBar = new QStackedWidget(Widget);
        SideBar->setObjectName(QString::fromUtf8("SideBar"));
        SideBar->setGeometry(QRect(190, 0, 611, 451));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        layoutWidget = new QWidget(page_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 20, 321, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        newpjbtn = new QPushButton(layoutWidget);
        newpjbtn->setObjectName(QString::fromUtf8("newpjbtn"));

        horizontalLayout->addWidget(newpjbtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        openpjbtn = new QPushButton(layoutWidget);
        openpjbtn->setObjectName(QString::fromUtf8("openpjbtn"));

        horizontalLayout->addWidget(openpjbtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        getpjbtn = new QPushButton(layoutWidget);
        getpjbtn->setObjectName(QString::fromUtf8("getpjbtn"));

        horizontalLayout->addWidget(getpjbtn);

        line = new QFrame(page_1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 60, 591, 16));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(page_1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 80, 561, 261));
        tableWidget->setStyleSheet(QString::fromUtf8("border:none;"));
        SideBar->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(186, 210, 61, 20));
        SideBar->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 200, 67, 17));
        SideBar->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 210, 67, 17));
        SideBar->addWidget(page);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(7, 80, 181, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_4 = new QToolButton(gridLayoutWidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 170px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 50px;\n"
"	background-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272"
                        "\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
""));
        toolButton_4->setCheckable(true);
        toolButton_4->setAutoExclusive(true);

        gridLayout->addWidget(toolButton_4, 4, 0, 1, 1);

        toolButton_1 = new QToolButton(gridLayoutWidget);
        toolButton_1->setObjectName(QString::fromUtf8("toolButton_1"));
        toolButton_1->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 170px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 50px;\n"
"	background-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272"
                        "\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
""));
        toolButton_1->setCheckable(true);
        toolButton_1->setAutoExclusive(true);

        gridLayout->addWidget(toolButton_1, 0, 0, 1, 1);

        toolButton_3 = new QToolButton(gridLayoutWidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 170px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 50px;\n"
"	background-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272"
                        "\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
""));
        toolButton_3->setCheckable(true);
        toolButton_3->setAutoExclusive(true);

        gridLayout->addWidget(toolButton_3, 2, 0, 1, 1);

        toolButton_2 = new QToolButton(gridLayoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setStyleSheet(QString::fromUtf8("/* \351\273\230\350\256\244 */\n"
"QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 170px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 50px;\n"
"	background-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272"
                        "\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(246, 246, 246);	\n"
"}\n"
""));
        toolButton_2->setCheckable(true);
        toolButton_2->setAutoExclusive(true);

        gridLayout->addWidget(toolButton_2, 1, 0, 1, 1);


        retranslateUi(Widget);

        SideBar->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\254\242\350\277\216\350\256\277\351\227\256GraphiBotics", nullptr));
        newpjbtn->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        openpjbtn->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        getpjbtn->setText(QCoreApplication::translate("Widget", "git\350\216\267\345\217\226", nullptr));
        label->setText(QCoreApplication::translate("Widget", "2", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "3", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "4", nullptr));
        toolButton_4->setText(QCoreApplication::translate("Widget", "\345\255\246\344\271\240", nullptr));
        toolButton_1->setText(QCoreApplication::translate("Widget", "\351\241\271\347\233\256", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Widget", "\346\217\222\344\273\266", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Widget", "\350\207\252\345\256\232\344\271\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
