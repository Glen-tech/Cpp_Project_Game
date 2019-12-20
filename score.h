#ifndef SCORE_H
#define SCORE_H

#include "QGraphicsTextItem"

class Score : public QGraphicsTextItem{
public :
    Score();

    inline void increase();
    inline int getScore();  // voor heel kleine functies (met geen variabelen)
    QGraphicsItem *parent;

private :
    int score ;

};

#endif // SCORE_H
