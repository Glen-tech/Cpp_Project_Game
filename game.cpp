#include <QGraphicsView>
#include <QDebug>
#include <QTimer>
#include "game.h"
#include "enemy.h"

Game::~Game()
{
   delete scene;
   delete timer ;
   delete view ;
   delete go;
   delete goEnemy;
}

void Game::makelevel()
{
   scene = new QGraphicsScene() ;
   timer = new QTimer;
   view = new QGraphicsView(scene);
   go = new player();
   goEnemy= new Enemy();

   view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> show();

   view -> setFixedSize(800,600); // grote venster
   scene -> setSceneRect(0,0,900,900); // grote speelveld

    go->makeobject(scene); // doorverwijzing naar class player
    goEnemy->makeobject(scene);//doorverwijzing naar class enemy

     qDebug() << "Game::Game(int &argc, char **argv) : QApplication (argc, argv)"; // zien waar je bent in de code bij compile
}
