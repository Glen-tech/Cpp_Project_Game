#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene> // maken kogel
#include <QTimer> // maken van de vijand
#include <QObject>
#include <game.h>


Game::Game(int &argc, char **argv) : QApplication (argc, argv)
{
    score = nullptr;
    player = nullptr ;
    scene = nullptr;
    view = nullptr;
    timer = nullptr;

    // maken van een scene
    scene = new QGraphicsScene ;// allocatie geheugen
    // item voor in de scene

    player = new MyRect();
    // rect is voor de waardes te veranderen

    player -> setRect(0,0,100,100);

    // toevoegen item

    scene -> addItem(player);

    // rect foscusable maken
    player -> setFlag(QGraphicsItem::ItemIsFocusable);
    player -> setFocus();

    // View toevoegen

   view = new QGraphicsView(scene);

   view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> show();

   view -> setFixedSize(900,900); // grote venster
   scene -> setSceneRect(0,0,900,900); // grote speelveld

   player ->setPos(view->width()/2 , view->height()-player ->rect().height());
   // speler zit nu in het midden

   score = new Score();
   scene -> addItem(score);

   timer = new QTimer;
   QObject :: connect(timer ,SIGNAL(timeout()),player,SLOT(spawn()));
   timer -> start(2000); // om de 2 seconde komt er een vijand

}

Game::~Game()
{
   delete scene;
 //  delete player ;
   delete view ;
   delete timer;
}
