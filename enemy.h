#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>


class Enemy : public QObject, public  QGraphicsRectItem
{
Q_OBJECT

public:
   Enemy();
public slots: // kan aan een signaal gekoppeld worden
    void move();
};

#endif // ENEMY_H
