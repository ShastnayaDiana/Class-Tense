#include "widget.h"
#include "liferect.h"
#include "ui_widget.h"

Widget::Widget(int x, int y) : x(x), y(y), scene(NULL), QWidget(0),
    ui(new Ui :: Widget)
{
    ui -> setupUi(this);
    timer = new QTimer();
    timer->setInterval(500);
    //Соединяем сигнал таймера о одном тике с слотом(on_timer_timeout())
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
}

Widget::Widget(){}

void Widget::on_Button_newGame_clicked(){
    new_game();
}

void Widget :: new_game(){
    if (scene == NULL){
        //Создаем графическую сцену с размерами поля для вывода
        scene = new QGraphicsScene(0, 0, ui->graphicsView->viewport()->width(), ui->graphicsView->viewport()->height());
         logic.fills.resize(x);
        for(int i = 0; i< x; i++){
            logic.fills[i].resize(y);
            for(int j = 0; j < y; j++)
            {
                //Создаем liferect *, в положении 0 0 и размером зависящим от размеры сцены
                Liferect  *rec = new Liferect(0, 0, scene->sceneRect().width()/(x), scene->sceneRect().height()/(y));
                //Добавляем на сцену элемент
                scene->addItem(rec);
                //Позиция его
                rec->setPos(0+i*scene->width()/(x), 0+j*scene->height()/(y));
                 logic.fills[i][j] = rec;
            }
        }
    }
    else
    {
        timer->stop();
        logic.setIterat( 0);
        ui->label->setText("Iterations = " + QString().setNum(logic.iterat()));
        for(int i = 0; i < x; i++)
            for( int j = 0; j < y; j++)
                 logic.fills[i][j]->setBrush(QBrush(Qt::white));
    }
    //Выставляем сцену
    ui->graphicsView->setScene(scene);
}

void Widget :: on_timer_timeout(){
    int k = logic.iterat();
    QVector<Liferect*> vector_redraw = logic.RedrawToTact(x, y);
    if (vector_redraw.count() == 0)
    {
        timer->stop();
        logic.setIterat(0);
    }
    else {
            for(int i = 0; i < vector_redraw.size(); i++){
                Liferect* redraw;
                redraw = vector_redraw[i];
                redraw->changeColor();
            }
            k++;
            ui->label->setText("Iterations: " + QString().setNum(k));
            logic.setIterat(k);
         }
}


void Widget::on_Button_start_clicked(){
    if (scene != NULL)//Если сцена существует, то запускаем
        timer->start();
}

void Widget::on_Button__one_iterat_clicked(){
    on_timer_timeout();
}

Widget::~Widget(){
    delete ui;
}
