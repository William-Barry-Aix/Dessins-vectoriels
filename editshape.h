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

    QGraphicsItem::GraphicsItemFlags  defaultFlags =  QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable;


public slots:
  //  void on_x_textEdited(const double arg1);
    //void on_y_textEdited(const double arg1);
    void on_selectionChanged();
    void setSelectedList();
private slots:
    void on_box_x_valueChanged(double arg1);
    void on_box_y_valueChanged(double arg1);


    void on_box_ep_valueChanged(double arg1);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_export_btn_clicked();
};

#endif // EDITSHAPE_H
