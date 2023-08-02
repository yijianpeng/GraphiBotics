#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QVBoxLayout"
#include "QToolButton"
#include "QToolBar"
#include "QString"
#include "QLabel"
#include "QTabBar"
#include <QIcon>
#include "cpp_syntax_highlighter.h"
#include <QProcess>
#include <QAction>
#include <QDebug>
#include <qdebug.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menubar->setStyleSheet("background-color:rgb(234,234,234);");
    //工具栏菜单设计
    ui->toolBar->setStyleSheet("background-color:rgb(234,234,234);"); //工具栏的背景颜色
    //添加子工具栏1,显示控制器
    QToolBar *module1ToolBar = new QToolBar("model 1",this);

    QToolButton *rightBUtton = new QToolButton(this);
    rightBUtton->setText("添加控制器");
    rightBUtton->setIcon(QIcon(":/pic/CPU.png"));
    rightBUtton->setIconSize(QSize(5,5)); // 设置图标的大小
    rightBUtton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    rightBUtton->setFixedSize(88,80); // 设置宽度为50，高度为50
    module1ToolBar->addWidget(rightBUtton);
    module1ToolBar->addSeparator();

    QToolButton *barbutton1 = new QToolButton(this);
    barbutton1->setText("请求写权限");
    barbutton1->setIcon(QIcon(":/pic/xie.png"));
    barbutton1->setIconSize(QSize(16,16)); // 设置图标的大小
    barbutton1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton1->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    
    QToolButton *barbutton2 = new QToolButton(this);
    barbutton2->setText("收回写权限");
    barbutton2->setIcon(QIcon(":/pic/cexiao.png"));
    barbutton2->setIconSize(QSize(18,18)); // 设置图标的大小
    barbutton2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton2->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton3 = new QToolButton(this);
    barbutton3->setText("用户管理");
    barbutton3->setIcon(QIcon(":/pic/user.png"));
    barbutton3->setIconSize(QSize(18,18)); // 设置图标的大小
    barbutton3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton3->setStyleSheet("QToolButton { font-size: 14px; border: none; }");
    //垂直布局管理器
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(barbutton1);
    layout->addWidget(barbutton2);
    layout->addWidget(barbutton3);
    QWidget *container = new QWidget;
    container->setLayout(layout);
    container->setFixedWidth(125); // 设置容器的固定宽度为200像素
    module1ToolBar->addWidget(container);
    ui->toolBar->addWidget(module1ToolBar); // 将子工具栏添加到主工具栏中
    ui->toolBar->addSeparator();

    //子工具栏2
    QToolBar *module2ToolBar = new QToolBar("model 2",this);
    QToolButton *barbutton4 = new QToolButton(this);
    barbutton4->setText("重启");
    barbutton4->setIcon(QIcon(":/pic/restart.png"));
    barbutton4->setIconSize(QSize(5,5)); // 设置图标的大小
    barbutton4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    barbutton4->setFixedSize(60,60); // 设置宽度为50，高度为50
    module2ToolBar->addWidget(barbutton4);
    module2ToolBar->addSeparator();

    QToolButton *barbutton5 = new QToolButton(this);
    barbutton5->setText("备份");
    barbutton5->setIcon(QIcon(":/pic/beifen.png"));
    barbutton5->setIconSize(QSize(40,40)); // 设置图标的大小
    barbutton5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    barbutton5->setFixedSize(60,60); // 设置宽度为50，高度为50
    module2ToolBar->addWidget(barbutton5);
    module2ToolBar->addSeparator();


    QToolButton *barbutton6 = new QToolButton(this);
    barbutton6->setText("输入/输出");
    barbutton6->setIcon(QIcon(":/pic/inout.png"));
    barbutton6->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton6->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton7 = new QToolButton(this);
    barbutton7->setText("事件");
    barbutton7->setIcon(QIcon(":/pic/shijian.png"));
    barbutton7->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton7->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton8 = new QToolButton(this);
    barbutton8->setText("文件传送");
    barbutton8->setIcon(QIcon(":/pic/wenjianchaunshu.png"));
    barbutton8->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton8->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton8->setStyleSheet("QToolButton { font-size: 14px; border: none; }");
    //垂直布局管理器
    QVBoxLayout *layout1 = new QVBoxLayout;
    layout1->addWidget(barbutton6);
    layout1->addWidget(barbutton7);
    layout1->addWidget(barbutton8);


    QToolButton *barbutton9 = new QToolButton(this);
    barbutton9->setText("示教器");
    barbutton9->setIcon(QIcon(":/pic/shijiao.png"));
    barbutton9->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton9->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton9->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton10 = new QToolButton(this);
    barbutton10->setText("在线监视器");
    barbutton10->setIcon(QIcon(":/pic/jiashi.png"));
    barbutton10->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton10->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton10->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton11 = new QToolButton(this);
    barbutton11->setText("信号分析仪");
    barbutton11->setIcon(QIcon(":/pic/xinhao.png"));
    barbutton11->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton11->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton11->setStyleSheet("QToolButton { font-size: 14px; border: none; }");
    //垂直布局管理器
    QVBoxLayout *layout2 = new QVBoxLayout;
    layout2->addWidget(barbutton9);
    layout2->addWidget(barbutton10);
    layout2->addWidget(barbutton11);

    // 创建水平布局管理器
    QHBoxLayout* horizontalLayout = new QHBoxLayout;
    // 将垂直布局1和垂直布局2添加到水平布局中
    horizontalLayout->addLayout(layout1);
    horizontalLayout->addLayout(layout2);
    QWidget *container1 = new QWidget;
    container1->setLayout(horizontalLayout);
    module2ToolBar->addWidget(container1);

    ui->toolBar->addWidget(module2ToolBar); // 将子工具栏2添加到主工具栏中
    ui->toolBar->addSeparator();

    //子工具栏2
    QToolBar *module3ToolBar = new QToolBar("model 3",this);
    QToolButton *barbutton12 = new QToolButton(this);
    barbutton12->setText("立即连接");
    barbutton12->setIcon(QIcon(":/pic/lianjie3.png"));
    barbutton12->setIconSize(QSize(12,12)); // 设置图标的大小
    barbutton12->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    barbutton12->setFixedSize(88,88); // 设置宽度为50，高度为50
    module3ToolBar->addWidget(barbutton12);
    module3ToolBar->addSeparator();

    QToolButton *barbutton13 = new QToolButton(this);
    barbutton13->setText("编译");
    barbutton13->setIcon(QIcon(":/pic/bianyi.png"));
    barbutton13->setIconSize(QSize(15,15)); // 设置图标的大小
    barbutton13->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton13->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton14 = new QToolButton(this);
    barbutton14->setText("运行");
    barbutton14->setIcon(QIcon(":/pic/yunxing.png"));
    barbutton14->setIconSize(QSize(18,18)); // 设置图标的大小
    barbutton14->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton14->setStyleSheet("QToolButton { font-size: 14px; border: none; }");

    QToolButton *barbutton15 = new QToolButton(this);
    barbutton15->setText("调试");
    barbutton15->setIcon(QIcon(":/pic/xinhao.png"));
    barbutton15->setIconSize(QSize(18,18)); // 设置图标的大小
    barbutton15->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    barbutton15->setStyleSheet("QToolButton { font-size: 14px; border: none; }");
    //垂直布局管理器
    QVBoxLayout *layout3 = new QVBoxLayout;
    layout3->addWidget(barbutton13);
    layout3->addWidget(barbutton14);
    layout3->addWidget(barbutton15);
    QWidget *container3 = new QWidget;
    container3->setLayout(layout3);
    module3ToolBar->addWidget(container3);
    module3ToolBar->addSeparator();

    QToolButton *barbutton16 = new QToolButton(this);
    barbutton16->setText("控制面板");
    barbutton16->setIcon(QIcon(":/pic/kongzhimianban.png"));
    barbutton16->setIconSize(QSize(12,12)); // 设置图标的大小
    barbutton16->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    barbutton16->setFixedSize(88,60); // 设置宽度为50，高度为50
    module3ToolBar->addWidget(barbutton16);

    barbutton17 = new QToolButton(this);
    barbutton17->setText("配置");
    barbutton17->setIcon(QIcon(":/pic/peizhi.png"));
    barbutton17->setIconSize(QSize(12,12)); // 设置图标的大小
    barbutton17->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    barbutton17->setFixedSize(60,60); // 设置宽度为50，高度为50
    module3ToolBar->addWidget(barbutton17);
    //module3ToolBar->addSeparator();
    ui->toolBar->addWidget(module3ToolBar); // 将子工具栏2添加到主工具栏中
    ui->toolBar->addSeparator();

    //图形化编程的图标大小设置
    //获取对象路径
    // 获取图像路径
    //状态栏显示的信息
    // 创建标签用于显示信息
    QLabel* messageLabel = new QLabel(this);
    messageLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);  // 设置对齐方式为靠右
    ui->statusBar->addPermanentWidget(messageLabel);
    // 更新信息
    messageLabel->setText("设备状态:正常  IP地址:R192.168.1.101    端口:85");

    /*工具栏按钮各个槽函数的绑定*/
    //编译按钮
    connect(barbutton13,SIGNAL(clicked()),SLOT(bianyi_clicked()));
    //运行按钮
    connect(barbutton14,SIGNAL(clicked()),SLOT(run_clicked()));
    //调试按钮
    connect(barbutton15,SIGNAL(clicked()),SLOT(debug_clicked()));
    
}

void MainWindow::setContent(const QString &content)
{
    qDebug("已经打开文件");
    //设置语法高亮功能
    highlighter = new CppSyntaxHighlighter(ui->plainTextEdit->document());
    //传入数据
    ui->plainTextEdit->setPlainText(content);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::bianyi_clicked()
{
    qDebug("按下编译按钮");
    //终端发送命令
    system("ls");
}

void MainWindow::run_clicked()
{
    qDebug("按下运行按钮");
}


void MainWindow::debug_clicked()
{
    qDebug("按下调试按钮");
}