#include <myrect.h>
#include <QKeyEvent>
#include <QGraphicsScene> // maken kogel

MyRect::MyRect()
{
    bullet = nullptr;
    enemy = nullptr;
}

MyRect::~MyRect()
{
    delete bullet;
    delete  enemy;
}

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if(event -> key() == Qt :: Key_Left)
    {
        if(pos().x() > 0) // als x groter is dan 0 , speler mag bewegen , anders niet
        {
        setPos(x()-10,y());
        }
    }

        else if(event -> key() == Qt :: Key_Right)
        {
            if(pos().x() +100 < 800) //als x + de vierkant en kleiner dan de breedte van de scherm
            {
            setPos(x()+10,y());
            }
        }

        else if(event -> key() == Qt :: Key_Up)
        {
            setPos(x(),y()-10);
        }

        else if(event -> key() == Qt :: Key_Down)
        {
            setPos(x(),y()+10);
        }

        else if(event -> key() == Qt :: Key_Space)
        {
            bullet = new Bullet();
            bullet -> setPos(x(),y()+10);
            scene() -> addItem(bullet);
        }
}

void MyRect::spawn() // vijand maken
{
        enemy = new Enemy();
        scene() -> addItem(enemy);
}
