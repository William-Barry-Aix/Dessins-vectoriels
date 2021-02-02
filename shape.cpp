#include "shape.h"

#include <QVector3D>
#include <QDebug>

//constructeur
Shape::Shape(){
    qDebug() << "shape instanciated";
}

Shape::Shape(QString _name){ //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    name = _name;
}

Shape::Shape(QString _name, QVector3D _position){ //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    name = _name;
    position = _position;
}

Shape::Shape(QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder){ //
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

void Shape::setPosition(QVector3D _position){
    position = _position;
}

void Shape::setBorderColor(QVector3D _borderColor){
    borderColor = _borderColor;
}

void Shape::setFillColor(QVector3D _fillColor){
    fillColor = _fillColor;
}

void Shape::setSizeBorder(double _sizeBorder){
    sizeBorder = _sizeBorder;
}

