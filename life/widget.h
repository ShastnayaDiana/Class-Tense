#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug> //исполь для записи пользовательской отладочной информации
#include "liferect.h"
#include "logic.h"

namespace Ui{
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
protected:
    Liferect liferect;
    Logic logic;
    Ui::Widget *ui;
    QTimer *timer;
    QGraphicsScene * scene;
    int x;
    int y;

private slots:
    void on_Button_newGame_clicked();
    void on_timer_timeout();
    void on_Button_start_clicked();
    void on_Button__one_iterat_clicked();

public:
    Widget(int x, int y);
    Widget();
    ~Widget();
    void new_game();
};

#endif // WIDGET_H

