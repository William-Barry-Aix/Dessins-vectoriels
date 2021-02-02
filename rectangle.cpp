#include "rectangle.h"
#include <QDebug>

Rectangle::Rectangle()
{
    //rect = new QRect(position.x(), position.y(), height, width);
}

Rectangle::Rectangle(double _height, double _width)
{
    height = _height;
    width = _width;
    //rect = new QRect(position.x(), position.y(), height, width);
}

void Rectangle::draw() {
    qDebug() << "draw rectangle";
}

void Rectangle::select(int x, int y) {
    qDebug() << "draw rectangle" << x << ", " << y;
}

bool Rectangle::isSelected(int x, int y){
    return rect->contains(x, y);
}

void Rectangle::save() {
    qDebug() << "save rectangle";
}


QRect Rectangle::getRect(){
    return QRect(position.x(), position.y(), height, width);
}
