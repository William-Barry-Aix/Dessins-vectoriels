#include "princ.h"
#include "ui_princ.h"
#include "iostream"
#include "stdio.h"
#include "editshape.h"

Princ::Princ(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Princ)
{
    ui->setupUi(this);
    EditShape *editWidget = new EditShape(this);//appel du construteur
}

Princ::~Princ()
{
    delete ui;
    std::cout << "test" ;
}

