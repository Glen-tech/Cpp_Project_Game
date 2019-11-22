#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QApplication>

class Game : public QApplication{

public:
    Game(int &argc, char **argv);
    ~Game();

    QGraphicsScene * scene ;
    QGraphicsView *view;
    QTimer *timer;

};



#endif // GAME_H
