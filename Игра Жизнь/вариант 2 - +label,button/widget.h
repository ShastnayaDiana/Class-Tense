#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug> //исполь для записи пользовательской отладочной информации
#include "liferect.h"

//#include <QMainWindow>

namespace Ui{
class Widget;
}


class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(int x, int y);
    ~Widget();
private slots:
    void on_pushButton_clicked();
    void on_timer_timeout();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    int x;
    int y;
    int iterations;
    QVector<QVector<Liferect*>>fills; //Двумерный вектор указателей на liferect
    QGraphicsScene * scene;
    void new_game();
    QTimer *timer;
    int count_neighbots(int pos_x, int pos_y);//Функция для подсчета живых соседей
};

#endif // WIDGET_H

