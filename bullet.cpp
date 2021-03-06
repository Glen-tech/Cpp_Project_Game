#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QDebug>
#include <typeinfo.h>

#include "enemy.h"
#include "bullet.h"

void Bullet::makeobject(QGraphicsScene *playerview)
{
    smaller.BulletMake = true;
    setRect(40,0,10,10); // maken kogel
    elements.timer = new QTimer();
    connect(elements.timer,SIGNAL(timeout()),this,SLOT(move()));//timer voor bewegen kogel
    elements.timer -> start(50);//timer is nu gezet op 50 ms
    if(smaller.BulletMake) qDebug() << "Bullet makeobject werkt";
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
            this -> deleteLater();
        }

    }
    setPos(x(),y()-10); // bewegen kogel

    if(pos().y() + rect().height()< 0 ) // kogel heeft einde scherm gebreikt
    {
        smaller.BulletRemove = true;
        scene()-> removeItem(this);
        this -> deleteLater();
        if(smaller.BulletRemove) qDebug() << "Bullet remove werkt";
    }
    smaller.BulletMove = true;
    if(smaller.BulletMove) qDebug() << "Bullet makeobject werkt";
}
