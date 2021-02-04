#include "rectangle.h"
#include <QDebug>

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double _height, double _width)
{
    height = _height;
    width = _width;
}

Rectangle::~Rectangle()
{

}

void Rectangle::draw(QPainter _painter){
    _painter.drawRect(getRect());
}

void Rectangle::select(int x, int y) {
    qDebug() << "draw rectangle" << x << ", " << y;
}

bool Rectangle::isSelected(int x, int y){
    return QRect(position.x(), position.y(), height, width).contains(x, y);
}

void Rectangle::save(){
    qDebug() << "save in meta file";
}


void Rectangle::setHeight(double _height){
    height = _height;
}

void Rectangle::setWidth(double _width){
    width = _width;
}


QRect Rectangle::getRect()
{
    return QRect(position.x(), position.y(), height, width);
}
