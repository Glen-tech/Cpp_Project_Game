#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QDebug>
#include <typeinfo.h>

#include "enemy.h"
#include "bullet.h"


Bullet::Bullet()
{
    Bullet::makeobject(playerview);// verwijzing makeobject functie
}

void Bullet::makeobject(QGraphicsScene *playerview)
{
    setRect(40,0,10,10); // maken kogel
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));//timer voor bewegen kogel
    timer -> start(50);//timer is nu gezet op 50 ms
}

void Bullet::move()
{
    QList < QGraphicsItem *> colliding_items  = collidingItems(); // bijhouden pad van de kogel
    for(int i = 0 , n = colliding_items.size() ; i < n ; i++)
    {
        if(typeid(*(colliding_items[i])) == typeid(Enemy)) // als de pad van de kogel een vijand aanraakt
        {
            scene()->removeItem(colliding_items[i]); // word de kogel verwijderd
            scene()-> removeItem(this);//en de vijand

            delete colliding_items[i];
            delete this;

        }

    }
    setPos(x(),y()-10); // bewegen kogel

    if(pos().y() + rect().height()< 0 ) // kogel heeft einde scherm gebreikt
    {
        scene()-> removeItem(this);
        delete this;//free memory
         qDebug() << " Bullet remove";
    }
    qDebug() << " Bullet::move()";
}
