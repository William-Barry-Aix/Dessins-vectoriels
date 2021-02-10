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

    QList<QGraphicsItem *> selectedItems;


public slots:
    void on_x_textEdited(const double arg1);
    void on_y_textEdited(const double arg1);
    void on_selectionChanged();
    void setSelectedList();
};

#endif // EDITSHAPE_H
