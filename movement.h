#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QKeyEvent>

class movement: public QObject,  public QGraphicsRectItem{

public:
    movement();
  // ~movement();
    void keyPressEvent(QKeyEvent *event);
};

#endif // MOVEMENT_H
