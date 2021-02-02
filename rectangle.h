#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QRect>
#include <QVector3D>
#include "shape.h"


class Rectangle : public Shape
{
    //variables de classe
public:
    QRect *rect =       nullptr;
    double height =     1.0;
    double width =      1.0;

public:
    Rectangle();
    Rectangle(double _height, double _width);

public:
    void draw() override;
    void select(int x, int y) override;
    bool isSelected(int x, int y) override;
    void save() override;

    //acces au rectangle formé
    QRect getRect();

};

#endif // RECTANGLE_H
