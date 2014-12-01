#include "test.h"

test::test(QGraphicsItem *parent): QGraphicsItem(parent){

}

QRectF test::boundingRect() const{
    return QRectF(0,0,30,30);
}

void test::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->setBrush(Qt::yellow);
    painter->drawRoundedRect(0,0,30,30,5,5);
}
