#include "liferect.h"

Liferect::Liferect( qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent):QGraphicsRectItem(x,y,w,h,parent)
{
    this->setBrush(QBrush(Qt::white));
}

Liferect::~Liferect()
{

}

void Liferect :: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    changeColor();
}

void Liferect :: changeColor()
{
    if (this->brush().color() == Qt::white)
        this->setBrush(QBrush(Qt::black));
    else
        this->setBrush(QBrush(Qt::white));
}
