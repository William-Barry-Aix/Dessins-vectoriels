#include "editshape.h"


#include "QtDebug"
#include "QGraphicsItem"

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



}





void EditShape::on_x_textEdited(const QString &arg1)
{
    //change le x de l'element selectionner
}



void EditShape::on_y_textEdited(const QString &arg1)
{
    // change le y de l'element selectionner
}

