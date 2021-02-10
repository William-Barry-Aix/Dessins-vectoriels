#include "editshape.h"


#include "QtDebug"
#include "QGraphicsItem"
#include "shape.h"
#include "rectangle.h"
#include <iostream>



EditShape::EditShape(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

    scene = new QGraphicsScene(this);
    graphicsView->setScene(scene);// peut etre précédé de ui->

    connect(box_x, SIGNAL(valueChanged(double)), this, SLOT(on_x_textEdited(double)));
    connect(box_y, SIGNAL(valueChanged(double)), this, SLOT(on_y_textEdited(double)));
    connect(scene, SIGNAL(selectionChanged()),
            this, SLOT(on_selectionChanged()));

    QBrush redBrush(Qt::red);
    QBrush blueBrush = QBrush(Qt::blue);
    QPen blackpen = QPen(Qt::black);
    blackpen.setWidth(6);

    ellipse = scene->addEllipse(10,10,100,100,blackpen,redBrush);
    ellipse->setFlag(QGraphicsItem::ItemIsMovable); // on comprend pas l'erreur

    QRect rect = QRect(10,10,50,50);
    QGraphicsRectItem *rectItem = new QGraphicsRectItem(rect);
    rectItem->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable); // on comprend pas l'erreur
    rectItem->setBrush(blueBrush);
    rectItem->setPen(blackpen);
    scene->addItem(rectItem);

    qDebug() << rectangle;
    //QPainter painter(this);
    /*
    rect1 =new class Rectangle(80.0, 120.0);
    rect1->setPosition(QVector2D(80.0, 80.0));
    rect1->setBorderColor(Qt::red);
    rect1->setFillColor(Qt::green);
    rect1->setSizeBorder(7.0);
    */
//    rect1->setFlagerino(QGraphicsItem::ItemIsMovable);


    //painter.setPen(rect1->getPen());
    //painter.drawRect(rect1->getRect());




}





void EditShape::on_x_textEdited(const double arg1)
{
    if (!scene->selectedItems().isEmpty()){
        scene->selectedItems().first()->setX(arg1);
    }

}



void EditShape::on_y_textEdited(const double arg1)
{
    if (!scene->selectedItems().isEmpty()){
        scene->selectedItems().first()->setX(arg1);
    }
}

void EditShape::on_selectionChanged(){
    if (!scene->selectedItems().isEmpty()){
        QGraphicsItem *item = scene->selectedItems().first();
        qDebug() << "oui" << item->x() << item->y();
        box_x->setValue(item->x());
        box_y->setValue(item->y());
    }else {
        box_x->setValue(0);
        box_y->setValue(0);
    }
}

void EditShape::setSelectedList(){
    this->selectedItems = scene->selectedItems();
    std::cout << "oui";
}

