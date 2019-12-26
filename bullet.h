#ifndef BULLET_H
#define BULLET_H

#include "score.h"
#include "object.h"

class Bullet : public object
{
Q_OBJECT

public:
    Bullet(){Bullet::makeobject(playerview);}// verwijzing makeobject functie
    void makeobject(QGraphicsScene *playerview);

public slots: // kan aan een signaal gekoppeld worden
    void move();

};


#endif // BULLET_H
