#include "princ.h"
#include "ui_princ.h"
#include "iostream"
#include "stdio.h"
#include "editshape.h"
#include "shape.h"
#include "rectangle.h"
#include <QDebug>

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

    delete painter;
}

void Princ::paintEvent(QPaintEvent *event){
    qDebug() << event;
    //init Painter
    QPainter painter(this);

    rect1 = new Rectangle(80.0, 120.0);
    rect1->setPosition(QVector2D(80.0, 80.0));
    rect1->setBorderColor(Qt::red);
    rect1->setFillColor(Qt::green);
    rect1->setSizeBorder(7.0);

    painter.setPen(rect1->getPen());
    painter.drawRect(rect1->getRect());

}
