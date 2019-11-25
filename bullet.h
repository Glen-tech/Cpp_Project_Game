#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include <score.h>


class Bullet : public QObject, public  QGraphicsRectItem
{
Q_OBJECT

public:
    Bullet();
    QTimer * timer;
    ~Bullet();

public slots: // kan aan een signaal gekoppeld worden
    void move();
};


#endif // BULLET_H
