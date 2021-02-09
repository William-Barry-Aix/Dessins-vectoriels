#include "shape.h"

#include <QVector3D>
#include <QVector2D>
#include <QDebug>
#include <QPainter>
#include <QGuiApplication>

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

Shape::Shape(QString _name, QVector2D _position, QColor _borderColor, QColor _fillColor, double _sizeBorder){
    name = _name;
    position = _position;
    borderColor = _borderColor;
    fillColor = _fillColor;
    sizeBorder = _sizeBorder;
}

Shape::~Shape(){
    delete painter;
    delete pen;
}

void Shape::draw(){
    qDebug() << "draw";
}
void Shape::select(int x, int y){
    qDebug() << "isSelected" << x << y;
}
bool Shape::isSelected(int x, int y){
    qDebug() << "isSelected" << x << y;
    return false;
}
void Shape::save(){
    qDebug() << "save";
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

void Shape::setPainter(){
    painter = new QPainter();
}

void Shape::setPen(){
    painter = new QPainter();
    pen = new QPen();
    pen->setColor(borderColor);
    pen->setWidth(sizeBorder);
    pen->setColor(fillColor);

    painter->setPen(*pen);
}


