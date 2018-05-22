#ifndef LOGIC_H
#define LOGIC_H
#include <QWidget>
#include <QtWidgets>
#include "liferect.h"
class Logic
{
    int iterations = 0;
public:
    Logic();
    QVector<QVector<Liferect*>>fills;
    //Подсчет соседей
    int count_neighbots(int pos_x, int pos_y, int x, int y);
    //Формирует массив, в котором хранятся адреса прямоугольников, которые нужно отправить на перерисовку, то есть изменить цвет
    QVector<Liferect*> RedrawToTact(int x, int y);
    void setIterat(int i);
    int iterat();
};

#endif // LOGIC_H
