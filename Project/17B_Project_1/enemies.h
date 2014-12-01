#ifndef ENEMIES_H
#define ENEMIES_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QKeyEvent>

class enemies : public QGraphicsItem
{
public:
    enemies();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    bool moving;
    void DoCollision();
};

#endif // ENEMIES_H
