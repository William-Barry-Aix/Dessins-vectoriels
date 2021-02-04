#include "shapescontainer.h"

#include <algorithm>
#include <iostream>
#include <list>
#include <QDebug>

ShapesContainer::ShapesContainer()
{
    shapesList = {};
}

ShapesContainer::~ShapesContainer()
{

}


void ShapesContainer::addShape(Shape _shape){
    shapesList.push_back(_shape);
    //re-call draw() du contexte graphique
}

void ShapesContainer::draw(){
    for (Shape current : shapesList ) {
        current.draw();
    }
}
Shape ShapesContainer::getShapeFromPoint(double _x, double _y){
    for (Shape current : shapesList ) {
        if (current.isSelected((int)_x, (int)_y)){
            return current
        }
    }

    qDebug() << " so shape selected";
    //return NULL;
}
