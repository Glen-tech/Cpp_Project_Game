#include "score.h"
#include "QFont"


Score::Score()
{
    score = 0;
    setPlainText(QString("Score") + QString::number(score));
    setDefaultTextColor(Qt :: blue);
    setFont(QFont("times",16));
}

void Score::increase()
{
    score++;
}

int Score::getScore()
{
    return score;
}



