#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <QRect>
#include <QVector3D>
#include "shape.h"

class Ellipse : public Shape
{
    //variables de classe
public:
    double height =     1.0;
    double width =      1.0;

public:
    Ellipse();
    Ellipse(double _height, double _width);
    ~Ellipse();

public:
    void draw() override;
    void select(int x, int y) override;
    bool isSelected(int x, int y) override;
    void save() override;

    //setters pour config le cercle
    void setHeight(double _height);
    void setWidth(double _width);

    //acces au rectangle formé
    QRect getEllipse();


};

#endif // ELLIPSE_H
