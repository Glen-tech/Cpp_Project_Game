#include "player.h"

player::~player()
{
    delete gamer ;
}

void player::makeobject(QGraphicsScene *playerview)
{
    smaller.testPlayer = true ;
    if(smaller.testPlayer){qDebug() << "Player Make Object werkt";}

    gamer = new movement(); // eenmalige aanmaak van de speler
    gamer ->setRect(0,0,100,100); // grote speler
    gamer ->setPos(400,500);//midden van het scherm
    gamer ->setFlag(QGraphicsItem::ItemIsFocusable);
    gamer ->setFocus();
    playerview->addItem(gamer);

}



