#ifndef SHAPE_H
#define SHAPE_H

#include <QVector3D>

class Shape
{
    //variables d'instances
public:
    QString     name = "shapeDefault";
    QVector3D   position = QVector3D(0, 0, 0);
    QVector3D   borderColor = QVector3D(0, 0, 0);
    QVector3D   fillColor = QVector3D(1.0, 1.0, 1.0);
    double      sizeBorder = 0.1;

public: //constructeur
    Shape();    //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    Shape(QString _name);
    Shape(QString _name, QVector3D _position);
    Shape(QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder);
    ~Shape();   //destructeur

    //fonctions de classe virtual
    virtual void draw() = 0;
    virtual void select(int x, int y) = 0;
    virtual bool isSelected(int x, int y) = 0;
    virtual void save() = 0;

    //setter
    void setName(QString _name);
    void setPosition(QVector3D _position);
    void setBorderColor(QVector3D _borderColor);
    void setFillColor(QVector3D _fillColor);
    void setSizeBorder(double _sizeBorder);
};

#endif // SHAPE_H
