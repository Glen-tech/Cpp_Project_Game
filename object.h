#ifndef OBJECT_H
#define OBJECT_H

#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QList>
#include <QDebug>

class object: public QObject, public  QGraphicsRectItem
{
public:
    object(){} // base class
   virtual ~object() = 0;

    virtual void makeobject(QGraphicsScene *playerview) = 0;

        struct construct
        {
            QGraphicsView *view;
            QTimer * timer;
            QKeyEvent *event;
            QGraphicsScene *playerview;
            QGraphicsRectItem *gamer;
            short random_number:10; // usefull member + max getal is 700 = 10 bits.
            construct():view(nullptr),timer(nullptr),event(nullptr),playerview(nullptr),gamer(nullptr),random_number(0){}
        };
        construct elements;

        struct testingProg
        {
            bool testMakeobject:1; // 8 naar 1 bit
            bool testMove:1;
            bool testSpawn:1;
            bool testBullet:1;
            bool testPlayer:1;
            bool BulletMake:1;
            bool BulletMove:1;
            bool BulletRemove:1;
            testingProg():testMakeobject(0),testMove(0),testSpawn(0),testBullet(0),testPlayer(0),BulletMake(0),BulletMove(0),BulletRemove(0){}
        };
        testingProg smaller ;

};

#endif // OBJECT_H
