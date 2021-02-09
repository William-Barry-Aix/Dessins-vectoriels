#include "shapescontainer.h"

#include <algorithm>
#include <iostream>
#include <list>
#include <QDebug>
#include <QPainter>

ShapesContainer::ShapesContainer()
{
    shapesList = {};
}

ShapesContainer::~ShapesContainer()
{

}


void ShapesContainer::addShape(Shape _shape){
    shapesList.push_back(_shape);
}

void ShapesContainer::draw(){
    //std::for_each (shapesList.begin(), shapesList.end(), std::mem_fun(&Rectangle::draw));
    //std::for_each (shapesList.begin(), shapesList.end(), std::mem_fun(&Ellipse::draw));
}

Shape ShapesContainer::getShapeFromPoint(double _x, double _y){
    std::list<Shape>::iterator it;
    for (it = shapesList.begin(); it != shapesList.end(); it++){
        if (it->isSelected((int)_x, (int)_y)){
            return *it;
        }
    }
    qDebug() << " no shape selected";
    //return NULL;
}
