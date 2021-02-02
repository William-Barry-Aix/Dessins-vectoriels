#ifndef SHAPE_H
#define SHAPE_H

#include <QVector3D>
#include <QVector2D>
#include <QPainter>

class Shape
{
    //variables d'instances
public:
    QString     name = "shapeDefault";
    QPen        pen;
    QVector2D   position = QVector2D(0, 0);
    QColor      borderColor = Qt::green;
    QColor      fillColor = Qt::darkGreen;
    double      sizeBorder = 0.1;

public: //constructeur
    Shape();    //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    Shape(QString _name);
    Shape(QString _name, QVector2D _position);
    Shape(QString _name, QVector2D _position, QColor _borderColor, QColor _fillColor, double _sizeBorder);
    ~Shape();   //destructeur

    //fonctions de classe virtual
    //virtual void draw() = 0;
    virtual void select(int x, int y) = 0;
    virtual bool isSelected(int x, int y) = 0;
    virtual void save() = 0;

    //setter
    void setName(QString _name);
    void setPosition(QVector2D _position);
    void setBorderColor(QColor _borderColor);
    void setFillColor(QColor _fillColor);
    void setSizeBorder(double _sizeBorder);

    //acces au pinceau de tracé de shape
    QPen getPen();
};

#endif // SHAPE_H
