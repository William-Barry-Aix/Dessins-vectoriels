#include "princ.h"
#include "ui_princ.h"
#include "shape.h"
#include "rectangle.h"
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
    //delete painter;
}

void Princ::paintEvent(QPaintEvent *event){
    qDebug() << event;
    //init Painter
    //painter = new QPainter();
    //painter.setBrush(Qt::Dense7Pattern);        //brush a l'intérieur du rectangle

    //rect1->setPen();
    rect1 = new Rectangle(80.0, 120.0);
    rect1->setPosition(QVector2D(80.0, 80.0));
    rect1->setBorderColor(Qt::red);
    rect1->setFillColor(Qt::green);
    rect1->setSizeBorder(7.0);

    rect1->setPen();
    rect1->draw();

}
