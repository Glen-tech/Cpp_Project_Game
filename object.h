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
    object():view(nullptr),timer(nullptr),event(nullptr),gamer(nullptr) {} // base class

    virtual void makeobject(QGraphicsScene *playerview) = 0;
    virtual ~object() = 0;


    QGraphicsView *view;
    QTimer * timer;
    QKeyEvent *event;
    QGraphicsScene *playerview;
    QGraphicsRectItem *gamer;

        struct var
        {
            short random_number:10; // usefull member + max getal is 700 = 10 bits.
            bool testMakeobject:1;
            bool testMove:1;
            bool testSpawn:1;
            bool testBullet:1;
            bool testPlayer:1;
            bool BulletMake:1;
            bool BulletMove:1;
            bool BulletRemove:1;
        };
        var smaller ;

};

#endif // OBJECT_H
