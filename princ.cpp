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
    delete rect1;
}

void Princ::paintEvent(QPaintEvent *event){
    qDebug() << event;
    //init Painter
    QPainter painter(this);
    //painter.setBrush(Qt::Dense7Pattern);        //brush a l'intérieur du rectangle

    rect1 = new Rectangle(80.0, 120.0);
    rect1->setBorderColor(Qt::red);

    painter.setPen(rect1->getPen());
    painter.drawRect(rect1->getRect());
    /*
    //optionnel, using a pen pour modifier le rectangle
    QPen pen;
    pen.setColor(Qt::darkGreen);
    pen.setWidth(5);


    painter.setPen(pen);
    painter.drawRect(QRect(80, 120, 200, 100));
    */
}
