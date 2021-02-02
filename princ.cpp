#include "princ.h"
#include "ui_princ.h"

#include <QDebug>

Princ::Princ(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Princ)
{
    ui->setupUi(this);
}

Princ::~Princ()
{
    delete ui;
}

void Princ::paintEvent(QPaintEvent *event){
    qDebug() << event;
    //init Painter
    QPainter painter(this);

    painter.drawRect(QRect(80, 120, 200, 100));
}
