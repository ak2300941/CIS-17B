#include "player.h"

player::player(QGraphicsItem* parent) : QGraphicsItem(parent){
    setFlag(QGraphicsItem::ItemIsFocusable);
    //Player Speed
    speed=5;
    //Player starts when not moving
    direction=5;
    //Down
    mDownSprite.append(QPixmap(":down1.png"));
    mDownSprite.append(QPixmap(":down2.png"));
    mDownSprite.append(QPixmap(":down3.png"));
    //Left
    mLeftSprite.append(QPixmap(":left1.png"));
    mLeftSprite.append(QPixmap(":left2.png"));
    mLeftSprite.append(QPixmap(":left3.png"));
    //Right
    mRightSprite.append(QPixmap(":right1.png"));
    mRightSprite.append(QPixmap(":right2.png"));
    mRightSprite.append(QPixmap(":right3.png"));
    //Up
    mUpSprite.append(QPixmap(":up1.png"));
    mUpSprite.append(QPixmap(":up2.png"));
    mUpSprite.append(QPixmap(":up3.png"));

}

void player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
//    //Rotation of picture when moving around
//    painter->translate(15,15);
//    painter->translate(-15,-15);
//    //Yellow
//    painter->setBrush(Qt::green);
//    //Draws the User
//    painter->drawPie(0,0,30,30,-45*16,-270*16);


    //Load Sprites
//    QDomDocument string;
//    QFile qfile("qrc:/xml/SpriteGuy.xml");
//    qfile.open(QIODevice::ReadOnly|QIODevice::Text);
//    string.setContent(&qfile);
//    //get path
//    QString imagePath=string.elementById("image").attributeNode("path").value();
//    QPixmap spriteSheet(imagePath);
//    QDomNodeList nRow=string.elementsByTagName("nRow");
//    //2D Array to hold xml values skip first 2, keep last 4
//    int dimensions[nRow.length()][6];
//    QString tempS;
//    QStringList tempL;
//    for(int i=0;i<nRow.length();i++){
//        tempS=nRow.at(i).toAttr().value();
//        tempL=tempS.split(" ",QString::SkipEmptyParts);
//        for(int l=0;l<6;l++){
//            dimensions[i][l]=tempL.at(l).toInt();
//        }
//    }
//    QRect *frames=new QRect[nRow.length()];
//    int start=2;
//    //x,y,width,height
//    for(int i=0;i<nRow.length();i++){
//        frames[i].setRect(dimensions[i][start],dimensions[i][start+1],dimensions[i][start+2],dimensions[i][start+3]);
//    }
//    QPixmap *iSprites=new QPixmap[nRow.length()];
//    for(int i=0;i<nRow.length();i++){
//        iSprites[i]=spriteSheet.copy(frames[i]);
//    }
//        qfile.close();
//        delete []frames;
//        delete []iSprites;
//    painter->drawPixmap ( mPos.x(),mPos.y(), *mSpriteImage,
//                                       mCurrentFrame, 0, 100,100 );
    //painter->drawPixmap ( mPos.x(),mPos.y(), *mSpriteImage,mCurrentFrame, 0, 100,100 );

    //Animate the person
    mCurrentFrame=++mCurrentFrame%3;
    //Down Sprite
    if(direction==4){
        painter->drawPixmap(mPos,(mDownSprite)[mCurrentFrame]);
    }
    //Left Sprite
    if(direction==2){
        painter->drawPixmap(mPos,(mLeftSprite)[mCurrentFrame]);
    }
    //Right Sprite
    if(direction==1){
        painter->drawPixmap(mPos,(mRightSprite)[mCurrentFrame]);
    }
    //Up Sprite
    if(direction==3){
        painter->drawPixmap(mPos,(mUpSprite)[mCurrentFrame]);
    }
    //Default (Look Down)
    if(direction==5){
        painter->drawPixmap(mPos,(mDownSprite)[mCurrentFrame]);
    }






}

QRectF player::boundingRect() const{
    return QRectF(0,0,30,30);
}

//Using Arrow Keys to control the player
void player::keyPressEvent(QKeyEvent *event){
    switch (event->key()){
        case Qt::Key_Right:{
            //moveBy(30,0);
            direction=1;
            break;
        }
        case Qt::Key_Left:{
            //moveBy(-30,0);
            direction=2;
            break;
        }
        case Qt::Key_Up:{
            //moveBy(0,-30);
            direction=3;
            break;
        }
        case Qt::Key_Down:{
            //moveBy(0,30);
            direction=4;
            break;
        }
    }
    update();
}

void player::advance(int phase)
{
    if(!phase) return;
    //Current position of the object in space
    QPointF location=this->pos();
    //Maps the currect x y coord. to scene x y coord.
    if(direction==1){
        setPos(mapToParent(speed,0));
    }
    else if(direction==2){
        setPos(mapToParent(-(speed),0));
    }
    else if(direction==3){
        setPos(mapToParent(0,-(speed)));
    }
    else if(direction==4){
        setPos(mapToParent(0,speed));
    }
}
