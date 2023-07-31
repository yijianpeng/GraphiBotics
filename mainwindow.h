#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cpp_syntax_highlighter.h"

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

};

#endif // MAINWINDOW_H
