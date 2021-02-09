#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QRect>
#include <QVector3D>
#include "shape.h"

class  Rectangle : public Shape
{


    //variables de classe
public:
    double height =     1.0;
    double width =      1.0;

public:
    Rectangle();
    Rectangle(double _height, double _width);
    ~Rectangle();

public:
    void draw() override;
    void select(int x, int y) override;
    bool isSelected(int x, int y) override;
    void save() override;

    //setters pour config le rectangle
    void setHeight(double _height);
    void setWidth(double _width);

    //acces au rectangle formé
    QRect getRect();
};

#endif // RECTANGLE_H
