#include "widget.h"
#include "./ui_widget.h"
#include "QLineEdit"
#include <QPainter>
#include <QFrame>
#include <QLabel>
#include <QImage>
#include <QFont>
#include <QString>
#include <QAction>
#include <QFileDialog>
#include <qdebug.h>
#include <QButtonGroup>
#include <QTableWidget>
#include <QFile>
#include <QIcon>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    btnGroup =new QButtonGroup;
    btnGroup->setExclusive(true);
    btnGroup->addButton(ui->toolButton_1, 0);
    btnGroup->addButton(ui->toolButton_2, 1);
    btnGroup->addButton(ui->toolButton_3, 2);
    btnGroup->addButton(ui->toolButton_4, 3);
    //搜素栏
    search_action = new QAction;
    search_action->setToolTip("搜索");//设置鼠标悬浮的提示
    search_action->setIcon(QIcon(":/pic/search.png"));//加载显示图片

    SearchLineEdit = new QLineEdit(ui->page_1);
    //设置编辑框位置大小
    SearchLineEdit->setGeometry(0, 10, 200, 50);
    SearchLineEdit->setPlaceholderText(tr("搜素项目"));
    SearchLineEdit->setStyleSheet("QLineEdit { border: none; background-color: rgba(0, 0, 0, 0);}");
    SearchLineEdit->addAction(search_action, QLineEdit::LeadingPosition);

    ui->tableWidget->setRowCount(2);
    ui->tableWidget->setColumnCount(2);
    //设置表格不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //设置隐藏表头
    ui->tableWidget->horizontalHeader()->setVisible(false);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //设置列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //所有列都扩展自适应宽度，填充充满整个QTableView宽度
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);//对第0列单独设置固定宽度
    ui->tableWidget->setColumnWidth(0,40);
   //合并单元格
    ui->tableWidget->setSpan(0,0,2,1);
    ui->tableWidget->setShowGrid(false);
    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("GraphiBotics")));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/home/yijianpeng/Project/QTproject")));
    ui->tableWidget->setItem(0,0, new QTableWidgetItem(QIcon(":/pic/1.png"), "1"));
    ui->tableWidget->setStyleSheet("QTableWidget{ border: none; background-color: rgba(0, 0, 0, 0);}");
    ui->tableWidget->show();

    //槽函数的设定
    connect(search_action, SIGNAL(triggered(bool)), this, SLOT(search()));
    connect(btnGroup,QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked),
            [=](QAbstractButton *button)
            {
               qDebug() << "当前选择的编号 " << btnGroup->checkedId();
               ui->SideBar->setCurrentIndex(btnGroup->checkedId());
            });

    // 设置一开始默认选中的页面
    btnGroup->button(0)->setChecked(true);
    ui->SideBar->setCurrentIndex(0);
}

//界面搜素栏的实现
void Widget::search()
{
    qDebug("Open Project button clicked");
}






//QPainter绘制函数
void Widget::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);

    // 使用QPainter绘制线条
    QPainter painter(this);
    painter.setPen(QPen(Qt::gray, 1)); // 设置线条的颜色和宽度

    QColor backgroundColor(230, 230, 230);
    painter.fillRect(1, 0,188,height(),backgroundColor); // 设置背景颜色为浅灰色

    //使用QPainter绘制logo
    QImage image(":/pic/logo.png");
    QImage scaledImage = image.scaled(50, 50,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    painter.drawImage(20, 20, scaledImage);

    //使用QPainter绘制应用名称
    // 设置字体
    QFont font("Arial", 12);
    font.setBold(true); // 设置加粗
    painter.setFont(font);
    painter.setPen(Qt::black);
    // 设置绘制的文字
    QString logoname = "GraphiBotics";
    painter.drawText(70, 40,logoname);

    font.setBold(0);
    painter.setFont(font);
    painter.setPen(Qt::gray);
    QString updatastr ="2023.7.24";
    painter.drawText(75,63,updatastr);
}

Widget::~Widget()
{
    delete ui;
}

//打开工程的槽函数
void Widget::on_openpjbtn_clicked()
{
    qDebug("Open Project button clicked");
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open .cpp File"), QDir::homePath(), tr("C++ Files (*.cpp);;All Files (*.*)"));
    if (filePath.isEmpty()) return;
        if (filePath.isEmpty()) return;

    QFile file(filePath); 

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Error"), tr("Cannot open file: %1").arg(file.errorString()));
        return;
    }
    QTextStream in(&file);
    QString content = in.readAll();
    file.close();
    //设置主窗口
    mainw.setContent(content);
    mainw.show();
}

//新建工程的槽函数
void Widget::on_newpjbtn_clicked()
{
    mainw.show();
}

//获取工程槽函数
void Widget::on_getpjbtn_clicked()
{
    //打开网页
    QDesktopServices::openUrl(QUrl("https://www.csdn.net", QUrl::TolerantMode));
}

//设置按钮的槽函数
void Widget::on_settingbtn_clicked()
{

}

