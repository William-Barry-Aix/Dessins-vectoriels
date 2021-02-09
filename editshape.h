#ifndef EDITSHAPE_H
#define EDITSHAPE_H

#include "ui_editshape.h"
#include <QtCore>
#include <QtGui>
#include "shape.h"
#include "rectangle.h"



class EditShape : public QWidget, private Ui::EditShape
{
    Q_OBJECT;


public:
    explicit EditShape(QWidget *parent = nullptr);
    class Rectangle *rect1;


private :
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;


private slots:



    void on_x_textEdited(const QString &arg1);
    void on_y_textEdited(const QString &arg1);
};

#endif // EDITSHAPE_H
