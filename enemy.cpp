#include <QTimer>
#include <QDebug>
#include <stdlib.h>//rand()
#include "enemy.h"

Enemy::~Enemy()
{
    delete timer;
}

void Enemy::makeobject(QGraphicsScene *playerview)
{
   testMakeobject= true ;
   if(testMakeobject) qDebug() << "Enemy make object werkt";

   smaller.random_number = rand() % 700;
   setPos(smaller.random_number,0);

   setRect(0,0,100,100);
   playerview->addItem(this); // enemy is nu toegevoegd
   timer = new QTimer;

   QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));  // timer voor move enemy
   timer ->start(60); // timer is nu gezet op 50 ms
}

void Enemy::move()
{
    testMove= true ;
    if(testMove){qDebug() << "Enemy move object werkt";}

    setPos(x(),y()+5); // vijand beweegt naar benenden
    if(pos().y() > 800) //als x + de vierkant en kleiner dan de breedte van de scherm
    {
         scene()-> removeItem(this); // werkt niet zonder this
         //this->disconnect();
         this->deleteLater();//free memory
        ;
    }

    timer->start(50); // timer is gezet op 50 ms
}

void Enemy::spawn() // maakt vijanden aan (niet compleet)
{
    testSpawn= true ;
    if(testSpawn){qDebug() << "Enemy spawn object werkt";}

    Enemy *enemy = new Enemy();
    scene()-> addItem(this);
}





