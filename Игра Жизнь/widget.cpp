#include "widget.h"
#include "ui_widget.h"

Widget::Widget(int x, int y) : x(x), y(y), iterations(0), scene(NULL), QWidget(0),
    ui(new Ui :: Widget)
{
    ui -> setupUi(this);
    timer = new QTimer();
    timer->setInterval(500);
    //Соединяем сигнал таймера о одном тике с слотом(on_timer_timeout())
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    new_game();
}

void Widget :: new_game(){
    if (scene == NULL){
        //Создаем графическую сцену с размерами поля для вывода
        scene = new QGraphicsScene(0, 0, ui->graphicsView->viewport()->width(), ui->graphicsView->viewport()->height());
        fills.resize(x);
        for(int i = 0; i< x; i++){
            fills[i].resize(y);
            for(int j = 0; j < y; j++)
            {
                //Создаем liferect *, в положении 0 0 и размером зависящим от размеры сцены
                Liferect  *rec = new Liferect(0, 0, scene->sceneRect().width()/(x), scene->sceneRect().height()/(y));
                //Добавляем на сцену элемент
                scene->addItem(rec);
                //Позиция его
                rec->setPos(0+i*scene->width()/(x), 0+j*scene->height()/(y));
                fills[i][j] = rec;
            }
        }
    }
    else
    {
        timer->stop();
        iterations = 0;
        for(int i = 0; i < x; i++)
            for( int j = 0; j < y; j++)
                fills[i][j]->setBrush(QBrush(Qt::white));
    }
    //Выставляем сцену
    ui->graphicsView->setScene(scene);
}

void Widget :: on_timer_timeout(){
    int nebs;
    QVector<Liferect*> fill_temp;//Вектор, в который попадают указатели на те элементы, цвет которых надо поменять
    for(int i = 0; i < x; i++)
        for (int j = 0; j < y; j++){
            nebs = count_neighbots(i,j);//Подсчитываем количество соседей для каждой клетки
            if (fills[i][j]->brush().color()==Qt::white && nebs==3)
                fill_temp.push_back(fills[i][j]);//Отправили на перерисовку
            if (fills[i][j]->brush().color()==Qt::black && (nebs>3 || nebs<2))
                fill_temp.push_back(fills[i][j]);
        }
    if (fill_temp.count() == 0)
    {
        timer->stop();
        QMessageBox::about(this, "GAME OVER!", "Iterations = " + QString().setNum(iterations));
        iterations = 0;
    }
    else
    {   //Обходим вектор с помощью итератора и меняем цвет у тех клеток цвет которых надо поменять
        QVector<Liferect*>::iterator it = fill_temp.begin();
        for(; it != fill_temp.end(); it++)
            (*it)->changeColor();
        iterations++;
    }
}

void Widget::on_pushButton_2_clicked()
{
    if (scene != NULL)//Если сцена существует, то запускаем
        timer->start();
}

int Widget::count_neighbots(int pos_x, int pos_y)
{
    int temp_i, temp_j;//Временные переменные, если соседи с др стороны
    int result = 0;
    for(int i = pos_x-1; i<=pos_x+1; i++){
        temp_i = i;
        if(i == -1) temp_i = x - 1;
        else if (i == x) temp_i = 0;
        for(int j = pos_y-1; j<=pos_y+1; j++){
            temp_j = j;
            if(j == -1) temp_j = y - 1;
            else if (j == y) temp_j = 0;
            if (fills[temp_i][temp_j]->brush().color() == Qt::black && !(temp_i == pos_x && temp_j == y))
                result++;
        }

    }
    return result;
}

