#ifndef BULLET_H
#define BULLET_H

#include "score.h"
#include "object.h"

class Bullet : public object
{
Q_OBJECT

public:
    Bullet(){testBullet();}// verwijzing makeobject functie
    void makeobject(QGraphicsScene *playerview);

    bool testBullet()
    {
        if(smaller.testBullet){qDebug() << "Bullet werkt";}
        Bullet::makeobject(elements.playerview);
        return true;
    }

public slots: // kan aan een signaal gekoppeld worden
    void move();

};


#endif // BULLET_H
