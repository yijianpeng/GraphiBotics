#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cpp_syntax_highlighter.h"
#include <QAction>
#include <QToolButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setContent(const QString &content);

private:
    Ui::MainWindow *ui;
    CppSyntaxHighlighter *highlighter;
    QToolButton *barbutton17;
    QAction *actbianyi2;
    QAction *actbianyi3;

public slots:


private slots:
    void bianyi_clicked();
    void run_clicked();
    void debug_clicked();
};

#endif // MAINWINDOW_H
