#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>//rand()

Enemy:: Enemy(): QObject (),QGraphicsRectItem ()
{
    // random positie top scherm

    random_number = rand() % 700;
    setPos(random_number, 0);

    setRect(0,0,100,100);
    // connect
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer -> start(50);
}

Enemy::~Enemy()
{
    delete timer;
}

void Enemy::Enemy::move()
{
    //Vijand gaat naar onder
    setPos(x(),y()+5);
    if(pos().y() + rect().height()< 0 )// verwijderen kogel , 0 os volledig links rect().height grote van de kogel
    {
        scene()-> removeItem(this);
        delete this;//free memory
    }
}
