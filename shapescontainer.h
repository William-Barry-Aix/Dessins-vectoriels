#ifndef SHAPESCONTAINER_H
#define SHAPESCONTAINER_H

#include <list>
#include "shape.h"
#include "rectangle.h"
#include "ellipse.h"

class ShapesContainer
{
    std::list<Shape> shapesList;

public:
    ShapesContainer();
    ~ShapesContainer();

public:
    void addShape(Shape _shape);
    void draw();
    Shape getShapeFromPoint(double _x, double _y);
};

#endif // SHAPESCONTAINER_H
