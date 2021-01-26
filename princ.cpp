#include "princ.h"
#include "ui_princ.h"
#include "iostream"
#include "stdio.h"

Princ::Princ(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Princ)
{
    ui->setupUi(this);
}

Princ::~Princ()
{
    delete ui;
    std::cout << "test" ;
}

