#include "shape.h"

#include <QVector3D>
#include <QVector2D>
#include <QDebug>
#include <QPainter>

//constructeur
Shape::Shape(){
    qDebug() << "shape instanciated";
}

Shape::Shape(QString _name){ //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    name = _name;
}

Shape::Shape(QString _name, QVector2D _position){ //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    name = _name;
    position = _position;
}

Shape::Shape(QString _name, QVector2D _position, QColor _borderColor, QColor _fillColor, double _sizeBorder){ //
    name = _name;
    position = _position;
    borderColor = _borderColor;
    fillColor = _fillColor;
    sizeBorder = _sizeBorder;
}

//destructeur
Shape::~Shape(){
    qDebug() << "destruction d'instance";
}


//setters
void Shape::setName(QString _name){
    name = _name;
}

void Shape::setPosition(QVector2D _position){
    position = _position;
}

void Shape::setBorderColor(QColor _borderColor){
    borderColor = _borderColor;
}

void Shape::setFillColor(QColor _fillColor){
    fillColor = _fillColor;
}

void Shape::setSizeBorder(double _sizeBorder){
    sizeBorder = _sizeBorder;
}

QPen Shape::getPen(){
    pen.setColor(borderColor);
    pen.setWidth(sizeBorder);
    pen.setColor(fillColor);


    return pen;
}


