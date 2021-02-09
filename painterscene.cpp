#include "painterscene.h"
#include "iostream"

PainterScene::PainterScene(QWidget *parent) : QGraphicsView(parent)
{

}

void PainterScene::paintEvent(QPaintEvent *event){
    std::cout << "OUI";
}
