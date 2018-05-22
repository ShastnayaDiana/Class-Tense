#ifndef LIFERECT_H
#define LIFERECT_H

#include <QObject>
#include <QtWidgets> //содержит классы для классических приложений на основе виджетов, модуль выдлен из  QtGui - компоненты графического интерфейса
class Liferect : public QGraphicsRectItem//представ прямоугольный элемент, который можно добавить на QGraphicsScene
        //(поверхность для управления большим числом графических 2d элементов)
{
public:
    Liferect(qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent = 0);
    Liferect();
    ~Liferect();
    //Предоставляет события мыши в каркасе графического представления
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //Изменение цвета
    void changeColor();
};

#endif // LIFERECT_H
