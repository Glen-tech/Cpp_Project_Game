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
   setRect(0,0,100,100);
   playerview->addItem(this); // enemy is nu toegevoegd
   timer = new QTimer;
   QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));  // timer voor move enemy
   timer ->start(60); // timer is nu gezet op 50 ms
   setPos(x(),y()+5);

   if(pos().y() > 600) //als x + de vierkant en kleiner dan de breedte van de scherm
   {
        scene()-> removeItem(this);
        delete this;
   }
}

void Enemy::move()
{
    qDebug() << "Enemy::move()";

    setPos(x(),y()+5); // vijand beweegt naar benenden
    if(pos().y() > 800) //als x + de vierkant en kleiner dan de breedte van de scherm
    {
         scene()-> removeItem(this); // werkt niet zonder this
         delete this;//free memory
         qDebug() << "removeEnemy";
    }

    timer->start(50); // timer is gezet op 50 ms

}

void Enemy::spawn() // maakt vijanden aan (niet compleet)
{

    int random_number = rand() % 700;
    setPos(random_number,0);
    setRect(0,0,100,100);

    qDebug() << "spawnFunctie";

}





