#ifndef BULLET_H
#define BULLET_H

#include "score.h"
#include "object.h"

class Bullet : public object
{
Q_OBJECT

public:
    Bullet(){testBullet(true);}// verwijzing makeobject functie
    void makeobject(QGraphicsScene *playerview);

    bool testBullet(bool testBullet = 0)
    {  if(testBullet){qDebug() << "Bullet werkt";}
        Bullet::makeobject(playerview);}

public slots: // kan aan een signaal gekoppeld worden
    void move();

};


#endif // BULLET_H
