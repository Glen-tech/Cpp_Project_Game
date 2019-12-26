#include <QGraphicsView>
#include <QDebug>
#include <QTimer>
#include <iostream>
#include "game.h"

using namespace std ;

Game::~Game()
{
   delete ofGame.scene;
   delete ofGame.timer ;
   delete ofGame.view ;
   delete ofGame.go;
   delete ofGame.goEnemy;
}

void Game::makelevel()
{

   if(ofGame.testGame)
   {qDebug() << "MakeLevel werkt";}

   ofGame.scene = new QGraphicsScene() ;
   ofGame.timer = new QTimer;
   ofGame.view = new QGraphicsView(ofGame.scene);
   ofGame.go = new player();
   ofGame.goEnemy= new Enemy();

   ofGame.go = &ofGame.player;
  //ofGame.goEnemy = &ofGame.enemy;

   ofGame.view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ofGame.view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ofGame.view -> show();

   ofGame.view -> setFixedSize(800,600); // grote venster
   ofGame.scene -> setSceneRect(0,0,900,900); // grote speelveld

   ofGame.go->makeobject(ofGame.scene); // doorverwijzing naar class player
   ofGame.goEnemy->makeobject(ofGame.scene);//doorverwijzing naar class enemy

}
