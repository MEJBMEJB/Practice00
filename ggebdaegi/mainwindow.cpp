#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1920,1080);

    _chooseMenu[0] = new QPushButton(tr("2D"),this);
    _chooseMenu[1] = new QPushButton(tr("3D"),this);
    _chooseMenu[2] = new QPushButton(tr("Force"),this);
    _chooseMenu[3] = new QPushButton(tr("Glove"),this);
    _chooseMenu[4] = new QPushButton(tr("DoD"),this);

    _chooseMenu[0]->setGeometry(this->width() * 0.20, this->height() * 0.15, this->width() * 0.20, this->height() * 0.30);
    _chooseMenu[1]->setGeometry(this->width() * 0.60, this->height() * 0.15, this->width() * 0.20, this->height() * 0.30);
    _chooseMenu[2]->setGeometry(this->width() * 0.10, this->height() * 0.55, this->width() * 0.20, this->height() * 0.30);
    _chooseMenu[3]->setGeometry(this->width() * 0.40, this->height() * 0.55, this->width() * 0.20, this->height() * 0.30);
    _chooseMenu[4]->setGeometry(this->width() * 0.70, this->height() * 0.55, this->width() * 0.20, this->height() * 0.30);
}

MainWindow::~MainWindow()
{
    delete ui;
}
