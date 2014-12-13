#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsItem>
#include <QKeyEvent>
#include <QWidget>
#include <QXmlStreamReader>
#include <QFile>
#include <QPixmap>
#include <QtXml/QDomElement>
#include <QDebug>
#include <QtXml/QDomNodeList>
#include <QtXml/QDomNode>
#include <QList>
#include <QTime>
#include <QTimer>
#include <QGraphicsObject>
#include <QObject>
#include <QPainter>
#include <QDebug>
#include <QImage>

class player : public QGraphicsItem
{
public:
    player(QGraphicsItem* parent = NULL);
    int speed;
    int direction;
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    virtual void keyPressEvent(QKeyEvent *event);
    void advance(int phase);
private:
    //Sprite Stuff
    QPixmap* mSpriteImage;
    int mCurrentFrame;
    QPoint mPos;
    QList<QPixmap> mDownSprite;
    QList<QPixmap> mLeftSprite;
    QList<QPixmap> mRightSprite;
    QList<QPixmap> mUpSprite;

};

#endif // PLAYER_H
