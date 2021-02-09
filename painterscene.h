#ifndef PAINTERSCENE_H
#define PAINTERSCENE_H

#include <QWidget>
#include "QGraphicsView"


class PainterScene : public QGraphicsView
{
    Q_OBJECT
public:
    explicit PainterScene(QWidget *parent = nullptr);
    void setPainter(QPainter painter);

protected:
    void paintEvent(QPaintEvent *event);

signals:

};

#endif // PAINTERSCENE_H

