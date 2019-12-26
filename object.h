#ifndef OBJECT_H
#define OBJECT_H

#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QList>

class object: public QObject, public  QGraphicsRectItem
{
public:
    object():view(nullptr),timer(nullptr),event(nullptr),gamer(nullptr) {} // base class

    QGraphicsView *view;
    QTimer * timer;
    QKeyEvent *event;
    QGraphicsScene *playerview;
    QGraphicsRectItem *gamer;

    virtual void makeobject(QGraphicsScene *playerview) = 0;
    virtual ~object() = 0;

private:

        struct var
        {
        short random_number:10; // usefull member + max getal is 700 = 10 bits.
        };

     var smaller;

};

#endif // OBJECT_H
