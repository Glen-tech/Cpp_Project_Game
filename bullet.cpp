#include <bullet.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <enemy.h>
#include <QDebug>
#include <QKeyEvent>

void Bullet::makeobject(QGraphicsScene *playerview)
{
    setRect(40,0,10,10);
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer -> start(50);
}

void Bullet::move()
{
    QList < QGraphicsItem *> colliding_items  = collidingItems();
    for(int i = 0 , n = colliding_items.size() ; i < n ; i++)
    {
        if(typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            scene()->removeItem(colliding_items[i]);
            scene()-> removeItem(this);

            delete colliding_items[i];
            delete this;

        }

    }
    setPos(x(),y()-10);

    if(pos().y() + rect().height()< 0 )// verwijderen kogel , 0 os volledig links rect().height grote van de kogel
    {
        scene()-> removeItem(this);
        delete this;//free memory
         qDebug() << " Bullet remove";
    }
    qDebug() << " Bullet::move()";
}
