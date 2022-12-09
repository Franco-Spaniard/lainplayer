#include "lainwindow.h"
#include "ui_lainwindow.h"

LainWindow::LainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LainWindow)
{
    ui->setupUi(this);
}

LainWindow::~LainWindow()
{
    delete ui;
}

