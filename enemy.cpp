#include <QTimer>
#include <QDebug>
#include <stdlib.h>//rand()
#include "enemy.h"

Enemy::~Enemy()
{
    delete elements.timer;
}

void Enemy::makeobject(QGraphicsScene *playerview)
{
   //Enemy *enemy = new Enemy();
  elements.random_number = rand() % 700;
  setPos(elements.random_number,0);
  setRect(0,0,100,100);

   playerview->addItem(this); // enemy is nu toegevoegd

   elements.timer = new QTimer;
   QObject::connect(elements.timer,SIGNAL(timeout()),this,SLOT(move()));  // timer voor move enemy
   elements.timer ->start(60); // timer is nu gezet op 50 ms

   smaller.testMakeobject= true ;
   if(smaller.testMakeobject == true) qDebug() << "Enemy make object werkt";


}

void Enemy::move()
{
    setPos(x(),y()+5); // vijand beweegt naar benenden
    if(pos().y() > 800) //als x + de vierkant en kleiner dan de breedte van de scherm
    {
         scene()-> removeItem(this); // werkt niet zonder this
         //this->disconnect();
         this->deleteLater();//free memory
        ;
    }
    elements.timer->start(50); // timer is gezet op 50 ms
    smaller.testMove= true ;
    if(smaller.testMove == true){qDebug() << "Enemy move object werkt";}
}







