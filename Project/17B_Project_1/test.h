#ifndef TEST_H
#define TEST_H

#include <QGraphicsItem>
#include <QPainter>

class test : public QGraphicsItem
{
public:
    test(QGraphicsItem* parent = NULL);
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
};

#endif // TEST_H
