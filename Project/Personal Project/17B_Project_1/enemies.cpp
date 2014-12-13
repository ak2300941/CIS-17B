#include "enemies.h"

enemies::enemies()
{
    //Random start rotation
    angle=(qrand()%360);
    setRotation(angle);
    //Set the speed (% of pixel at a time)
    speed=5;
    //Setup Sprite
    //Enemy
    enemy.append(QPixmap(":enemy1.png"));
    enemy.append(QPixmap(":enemy2.png"));
    enemy.append(QPixmap(":enemy3.png"));
    //Random start position
    int StartX=0;
    int StartY=0;
    if((qrand()%1))
    {
        StartX=(qrand()%200);
        StartY=(qrand()%200);
    }
    else
    {
        StartX=(qrand()%-100);
        StartY=(qrand()%-100);
    }
    setPos(mapToParent(StartX,StartY));

}

QRectF enemies::boundingRect() const
{
    return QRect(0,0,20,20);
}

void enemies::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
//    QRectF rec=boundingRect();
//    QBrush Brush(Qt::gray);
    //Basic Collision Detection
    if(scene()->collidingItems(this).isEmpty())
    {
        //No Collision if empty (Green)
//        Brush.setColor(Qt::green);
    }
    else
    {
        //Collision (Red)
//        Brush.setColor((Qt::red));
        //Set the position
        DoCollision();
    }
//    painter->fillRect(rec,Brush);
//    painter->drawRect(rec);
    //Animate the person
    mCurrentFrame=++mCurrentFrame%3;
    painter->drawPixmap(mPos,(enemy)[mCurrentFrame]);
}

void enemies::advance(int phase)
{
    if(!phase) return;
    //Current position of the object in space
    QPointF location=this->pos();
    //Maps the currect x y coord. to scene x y coord.
    setPos(mapToParent(0,-(speed)));
}

void enemies::DoCollision()
{
    //Get a new position

    //Change the angle with a little randomness
    if(((qrand()%1)))
    {
        //If hit something spin to opposite direction and add a 0~10 to angle
        setRotation(rotation()+(180+(qrand()%10)));
    }
    else
    {
        setRotation(rotation()+(180+(qrand()%-10)));
    }
    //Error Checking (See if new position is in the bounds)
    QPointF newpoint=mapToParent(-(boundingRect().width()),-(boundingRect().width()+1));
    //QPointF newpoint=mapToParent(-(boundingRect().width()),-(boundingRect().width()+5));
    if(!scene()->sceneRect().contains((newpoint)))
    {
        //move back into bounds
        newpoint=mapToParent(0,0);
    }
    else
    {
        //set the new position
        setPos(newpoint);
    }
}
