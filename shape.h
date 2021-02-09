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
    QPen        *pen = nullptr;
    QPainter    *painter = nullptr;
    QVector2D   position = QVector2D(0, 0);
    QColor      borderColor = Qt::green;
    QColor      fillColor = Qt::darkGreen;
    double      sizeBorder = 0.1;

public: //constructeur
    Shape();    //QString _name, QVector3D _position, QVector3D _borderColor, QVector3D _fillColor, double _sizeBorder
    Shape(QString _name);
    Shape(QString _name, QVector2D _position);
    Shape(QString _name, QVector2D _position, QColor _borderColor, QColor _fillColor, double _sizeBorder);
    ~Shape();

public:
    //fonctions de classe virtual
    virtual void draw();
    virtual void select(int x, int y);
    virtual bool isSelected(int x, int y);
    virtual void save();

    //setter
    void setName(QString _name);
    void setPosition(QVector2D _position);
    void setBorderColor(QColor _borderColor);
    void setFillColor(QColor _fillColor);
    void setSizeBorder(double _sizeBorder);
    void setPainter();
    void setPen();
};

#endif // SHAPE_H
