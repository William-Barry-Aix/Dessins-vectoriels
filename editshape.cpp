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

    connect(box_x, SIGNAL(valueChanged(double)), this, SLOT(on_box_x_valueChanged(double)));
    connect(box_y, SIGNAL(valueChanged(double)), this, SLOT(on_box_y_valueChanged(double)));
    connect(box_ep, SIGNAL(valueChanged(double)), this, SLOT(on_box_ep_valueChanged(double)));
    connect(scene, SIGNAL(selectionChanged()), this, SLOT(on_selectionChanged()));
    //connect(pushButton, SIGNAL(clicked()()), this, SLOT(on_pushButton_clicked()));
    //connect(pushButton_2, SIGNAL(clicked()()), this, SLOT(on_pushButton_2_clicked));


    box_x->setMinimum(-9999); // permet aux double d'etre negatifs
    box_y->setMinimum(-9999);

    box_x->setMaximum(9999); // permet aux double d'etre negatifs
    box_y->setMaximum(9999);


    //qDebug() << rectangle;

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




/*
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
*/
void EditShape::on_selectionChanged(){
    if (!scene->selectedItems().isEmpty()){
        QGraphicsItem *item = scene->selectedItems().first();
        qDebug() << "oui" << item->x() << item->y();
        box_x->setValue(item->x());
        box_y->setValue(item->y());
       // box_ep->setValue(item->) //associer la box_ep a l'épaisseur de l'item
    }else {
        box_x->setValue(0);
        box_y->setValue(0);
    }
}

void EditShape::setSelectedList(){
    this->selectedItems = scene->selectedItems();
    std::cout << "oui";
}


void EditShape::on_box_x_valueChanged(double arg1)
{
    if (!scene->selectedItems().isEmpty()){
        scene->selectedItems().first()->setX(arg1);
    }
}

void EditShape::on_box_y_valueChanged(double arg1)
{
    if (!scene->selectedItems().isEmpty()){
        scene->selectedItems().first()->setY(arg1);
    }
}



void EditShape::on_box_ep_valueChanged(double arg1)
{
    qDebug() << arg1;
    if (!scene->selectedItems().isEmpty()){
//        scene->selectedItems().first()-> // augmente ou diminue l'épaisseur de l'item selectionné en fonction de arg1
    }

}

void EditShape::on_pushButton_clicked()
{
    //qDebug() << "ajout cercle";
    QGraphicsEllipseItem *elipse = scene->addEllipse(20,20,100,100, QPen(Qt::black), QBrush(Qt::green));
    elipse->setFlags(defaultFlags);
    //scene->addItem(elipse);
}

void EditShape::on_pushButton_2_clicked()
{
    //qDebug() << "ajout rectanglehrzfzef";
    QGraphicsRectItem *rectan = scene->addRect(15,15,100,100, QPen(Qt::black), QBrush(Qt::yellow));
    rectan->setFlags(defaultFlags);
    scene->addItem(rectan);

}

void EditShape::on_pushButton_3_clicked()
{
    QGraphicsLineItem *ligne = scene->addLine(15,15,100,100, QPen(Qt::gray));
    ligne->setFlags(defaultFlags);
    scene->addItem(ligne);
}


void EditShape::on_export_btn_clicked()
{
    qDebug() << "done!";
    scene->clearSelection();                                                  // Selections would also render to the file
    scene->setSceneRect(scene->itemsBoundingRect());                          // Re-shrink the scene to it's bounding contents
    QImage image(scene->sceneRect().size().toSize(), QImage::Format_ARGB32);  // Create the image with the exact size of the shrunk scene
    image.fill(Qt::transparent);                                              // Start all pixels transparent

    QPainter painter(&image);
    scene->render(&painter);
    image.save("file_name.png");

}
