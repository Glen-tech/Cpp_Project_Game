#include <bullet.h>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include <enemy.h>

Bullet:: Bullet(): QObject (),QGraphicsRectItem ()
{
    setRect(0,0,10,50);
    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer -> start(50);

}

void Bullet::move()
{
    // als de kogel in contact komt met de vijand , vernietig allebij
    QList < QGraphicsItem *> colliding_items  = collidingItems();
    for(int i = 0 , n = colliding_items.size() ; i < n ; i++)
    {
        if(typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            scene()->removeItem(colliding_items[i]);
            scene()-> removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }

    }
    setPos(x(),y()-10);
    if(pos().y() + rect().height()< 0 )// verwijderen kogel , 0 os volledig links rect().height grote van de kogel
    {
        scene()-> removeItem(this);
        delete this;//free memory
        qDebug() << "Kogel is verwijderd";
    }

}