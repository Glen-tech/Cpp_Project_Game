#include "movement.h"
#include <QDebug>

void movement::keyPressEvent(QKeyEvent *event)
{
    testMovement = true ;
    if(testMovement) {qDebug() << "Movement KeyPressEvent werkt";}

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
        else if(event -> key() == Qt :: Key_Space)
        {
                bullet = new Bullet(); // aanmaak bullet bij drukken spacebar
                bullet -> setPos(x(),y()+10);
                scene() -> addItem(bullet);
        }
}


