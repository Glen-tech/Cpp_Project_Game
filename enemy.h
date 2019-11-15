#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include <game.h>

class Enemy : public QObject, public  QGraphicsRectItem
{
Q_OBJECT

public:
   Enemy();
   ~Enemy();
   int random_number;
   QTimer * timer;

public slots: // kan aan een signaal gekoppeld worden
    void move();
};

#endif // ENEMY_H
