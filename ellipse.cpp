#include "ellipse.h"
#include <QDebug>

Ellipse::Ellipse()
{

}

Ellipse::Ellipse(double _height, double _width)
{
    height = _height;
    width = _width;
}

Ellipse::~Ellipse()
{

}

void Ellipse::draw(){
    painter->drawEllipse(getEllipse());
}

void Ellipse::select(int x, int y) {
    qDebug() << "draw ellipse" << x << ", " << y;
}

bool Ellipse::isSelected(int x, int y){
    return QRect(position.x(), position.y(), height, width).contains(x, y);
}

void Ellipse::save(){
    qDebug() << "save in meta file";
}


void Ellipse::setHeight(double _height){
    height = _height;
}

void Ellipse::setWidth(double _width){
    width = _width;
}


QRect Ellipse::getEllipse()
{
    return QRect(position.x(), position.y(), height, width);
}
