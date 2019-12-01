#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>//rand()
#include <QDebug>

Enemy::~Enemy()
{
    delete timer;
}


void Enemy::makeobject(QGraphicsScene *playerview)
{
   int random_number = rand() % 700;
   setPos(random_number,0);
   setRect(0,0,100,100);
   playerview->addItem(this);
   timer = new QTimer;
   QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));
   timer ->start(50);

   setPos(x(),y()+5);
   if(pos().y() > 600) //als x + de vierkant en kleiner dan de breedte van de scherm
   {
        scene()-> removeItem(this);
        delete this;//free memory

   }
}

void Enemy::move()
{

    qDebug() << "Enemy::move()";

    setPos(x(),y()+5);
    if(pos().y() > 800) //als x + de vierkant en kleiner dan de breedte van de scherm
    {
         scene()-> removeItem(this);
         delete this;//free memory
         qDebug() << "removeEnemy";
    }

    timer->start(50);

}

void Enemy::spawn()
{

    int random_number = rand() % 700;
    setPos(random_number,0);
    setRect(0,0,100,100);

    qDebug() << "spawnFunctie";

}





