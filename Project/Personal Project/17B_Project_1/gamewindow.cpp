#include "gamewindow.h"
#include "ui_gamewindow.h"

gameWindow::gameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameWindow)
{
    ui->setupUi(this);
    //Get Name and Difficulty
    storage temp;
    name=temp.getName();
    diff=temp.getDiff();
//    qDebug()<<"Testing Storage: ";
//    qDebug()<<name;
//    qDebug()<<diff;
    //Write in the name at the botton
    ui->nameLabel->setText(name);
    //Set up the points system
    points=0;
    //Setting up Graphic Scene
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    //Smooth out the Graphic
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    //Set the Borders of the Graphic Scene
    scene->setSceneRect(-200,-200,300,300);
    QPixmap pim(":tile.png");
    scene->setBackgroundBrush(pim.scaled(300,300,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    //Initializing Borderlines
    QPen mypen=QPen(Qt::red);
    QLineF TopLine(scene->sceneRect().topLeft(),scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(),scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(),scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(),scene->sceneRect().bottomRight());
    //Adding the Borderlines
    scene->addLine(TopLine,mypen);
    scene->addLine(LeftLine,mypen);
    scene->addLine(RightLine,mypen);
    scene->addLine(BottomLine,mypen);
    //Adding Items into scene
    //Enemies
//    enemy=new enemies;
//    scene->addItem(enemy);
    //Add Enemies depending on difficulty
    for(int i=0;i<diff;i++){
        enemy=new enemies;
        scene->addItem(enemy);
    }
    //Add Player
    user=new player;
    user->setPos(-150,-150);
    scene->addItem(user);
    user->setFocus();
    //Animation (Advance Steps)
    timer=new QTimer(this);
    //Logic for Enemy
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));
    //Logic for game
    connect(timer, SIGNAL(timeout()), this,SLOT(updater()));
    //100 milliseconds
    timer->start(50);
}

gameWindow::~gameWindow()
{
    delete ui;
}

void gameWindow::endGame()
{
    gameOver *k=new gameOver;
    k->show();
    this->close();
}


void gameWindow::updater()
{
    //When collided with an enemy
    if(user->collidesWithItem(enemy)){
        //So doesn't spam collisions
        user->setPos(500,500);
        storage temp;
        temp.setPoints(points);
        endGame();
    }
    //Add points
    //If not collide with borders
    if(scene->collidingItems(user).isEmpty()){
        points=points+100;
    }
    //If collides with borders
    else{
        user->setPos(500,500);
        storage temp;
        temp.setPoints(points);
        endGame();
    }

    ui->scoreLabel->setNum(points);
    update();
}
