#include <QApplication>
#include <myrect.h>
#include <QGraphicsView>
#include <QGraphicsScene> // maken kogel
#include <QTimer> // maken van de vijand
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // maken van een scene
    QGraphicsScene * scene = new QGraphicsScene ;// allocatie geheugen
    // item voor in de scene


    MyRect *player = new MyRect();
    // rect is voor de waardes te veranderen

    player -> setRect(0,0,100,100);

    // toevoegen item

    scene -> addItem(player);

    // rect foscusable maken
    player -> setFlag(QGraphicsItem::ItemIsFocusable);
    player ->setFocus();

    // Vieuw toevoegen

    QGraphicsView * view = new QGraphicsView(scene);

    view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view -> show();


   view -> setFixedSize(900,900); // grote venster
   scene -> setSceneRect(0,0,900,900); // grote speelveld

   player ->setPos(view->width()/2 , view->height()-player ->rect().height());
   // speler zit nu in het midden

   QTimer *timer = new QTimer;
   QObject :: connect(timer ,SIGNAL(timeout()),player,SLOT(spawn()));
   timer -> start(2000); // om de 2 seconde komt er een vijand
   return a.exec();
}
