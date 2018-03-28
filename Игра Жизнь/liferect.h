#ifndef LIFERECT_H
#define LIFERECT_H

#include <QObject>
#include <QtWidgets> //содержит классы для классических приложений на основе виджетов, модуль выдлен из  QtGui - компоненты графического интерфейса
class Liferect : public QGraphicsRectItem//представ прямоугольный элемент, который можно добавить на QGraphicsScene
        //(поверхность для управления большим числом графических 2d элементов)
{
public:
    Liferect(qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent = 0);
    ~Liferect();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);//предоставляет события мыши в каркасе графического представления
    //функцмя смена цвета
    void changeColor();
};

#endif // LIFERECT_H
