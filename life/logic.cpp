#include "liferect.h"
#include "logic.h"
#include "widget.h"

Logic::Logic()
{

}

int Logic::count_neighbots(int pos_x, int pos_y,int x, int y)
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
            if (fills[temp_i][temp_j]->brush().color() == Qt::black && !(temp_i == pos_x && temp_j == pos_y))
                result++;
        }

    }
    return result;
}

QVector<Liferect*> Logic :: RedrawToTact(int x, int y){
    int nebs;
    QVector<Liferect*> fill_temp;//Вектор, в который попадают указатели на те элементы, цвет которых надо поменять
    for(int i = 0; i < x; i++)
        for (int j = 0; j < y; j++){
            nebs = count_neighbots(i,j, x, y);//Подсчитываем количество соседей для каждой клетки
            if (fills[i][j]->brush().color() == Qt::white  && nebs==3)
                fill_temp.push_back(fills[i][j]);//Отправили на перерисовку
            if (fills[i][j]->brush().color()== Qt::black && (nebs>3 || nebs<2))
                fill_temp.push_back(fills[i][j]);
        }

    return fill_temp;
}

void Logic::setIterat(int i)
{
    iterations = i;
}

int Logic::iterat()
{
    return iterations;
}
