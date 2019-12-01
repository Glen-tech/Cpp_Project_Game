#ifndef OBJECT_H
#define OBJECT_H

#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QList>
#include <QKeyEvent>


class object: public QObject, public  QGraphicsRectItem
{

public:

    object():view(nullptr),timer(nullptr),event(nullptr) {}

    QGraphicsView *view;
    QTimer * timer;
    QKeyEvent *event;
    QGraphicsScene *playerview;
    virtual void makeobject(QGraphicsScene *playerview) = 0;
    int random_number;

};

#endif // OBJECT_H
