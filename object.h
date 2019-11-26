#ifndef OBJECT_H
#define OBJECT_H

#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsView>

class object: public QObject, public  QGraphicsRectItem
{
public:
    object();
    ~object();

    QGraphicsRectItem *gamer;
    QGraphicsView *view;

    int random_number;
    QTimer * timer;
};

#endif // OBJECT_H
