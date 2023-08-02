#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextBrowser>
#include <QButtonGroup>
#include <QStandardItemModel>
#include <QMainWindow>
#include "mainwindow.h"
class QLabel;
class QLineEdit;
class QPushButton;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QAction *search_action;
    QLabel *label;
    QLineEdit *SearchLineEdit;
    QButtonGroup *btnGroup;
    QStandardItemModel *m_pmodel;
    MainWindow mainw;
    

public slots: // 在slots关键字下声明槽函数
    void search();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void on_openpjbtn_clicked();
    void on_newpjbtn_clicked();
    void on_getpjbtn_clicked();

    void on_settingbtn_clicked();
};
#endif // WIDGET_H
