#include "editshape.h"


#include "QtDebug"
#include "QGraphicsItem"
#include "shape.h"
#include "rectangle.h"



EditShape::EditShape(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

    scene = new QGraphicsScene(this);
    graphicsView->setScene(scene);// peut etre précédé de ui->

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(6);

    ellipse = scene->addEllipse(10,10,100,100,blackpen,redBrush);
    rectangle = scene->addRect(-100,-100,50,50,blackpen,blueBrush);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable); // on comprend pas l'erreur


    QPainter painter(this);

    rect1 =new class Rectangle(80.0, 120.0);
    rect1->setPosition(QVector2D(80.0, 80.0));
    rect1->setBorderColor(Qt::red);
    rect1->setFillColor(Qt::green);
    rect1->setSizeBorder(7.0);
//    rect1->setFlagerino(QGraphicsItem::ItemIsMovable);


    painter.setPen(rect1->getPen());
    painter.drawRect(rect1->getRect());




}





void EditShape::on_x_textEdited(const QString &arg1)
{
    //change le x de l'element selectionner
}



void EditShape::on_y_textEdited(const QString &arg1)
{
    // change le y de l'element selectionner
}

