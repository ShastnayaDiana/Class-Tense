#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, &QPushButton::clicked, ui->pushButton, &QPushButton::hide);
    QObject::connect(ui->pushButton, &QPushButton::clicked, ui-> label_2, &QLabel::hide);
    QObject::connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_label_3_linkActivated);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_label_3_linkActivated()
{
    ui->label_3->setText("Добро пожаловать!");
}
