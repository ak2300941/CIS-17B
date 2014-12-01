#ifndef PACMAN_H
#define PACMAN_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QKeyEvent>

class pacman : public QGraphicsItem
{
public:
    pacman();
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

#endif // PACMAN_H
