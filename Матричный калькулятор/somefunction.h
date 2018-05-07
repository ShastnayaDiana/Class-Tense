#ifndef SOMEFUNCTION_H
#define SOMEFUNCTION_H
#include <QErrorMessage>
#include "Matrix.h"
#include "mainwindow.h"
#include <QTableWidgetItem>

void ShowErrorMsg(const error message){//показывает сообщение о неверных входных данных
    QErrorMessage errorMessage;
       switch (message)
        {
            case impossible:
                errorMessage.showMessage("Impossible operation!");
                break;
            case mul_impossible:
                errorMessage.showMessage("It is impossible to mul matrix!");
                break;
            case size_0:
                errorMessage.showMessage("The size of zero can not be!");
                break;
            case incorrec_data:
                errorMessage.showMessage("Incorrect data!");
                break;
        }
    errorMessage.exec();
}

//помещает из таблицы содержимое в матрицу
Matrix TableToMatrix(QTableWidget *table){
    int rows = table->rowCount();
    int cols = table->columnCount();
    Matrix tmp(rows, cols);
    try{
        for (int i =0; i<rows;i++){
            for (int j=0;j<cols;j++){
                bool ok;//переменная отвечающая за успешное конвертирование строки в число
                long double t = (table->item(i, j)->text()).toDouble(&ok);//извлекаем содержимое ячейки [i][j]
                if (!ok)//если конвертация не удалась, бросить исключение
                    throw incorrec_data;
                tmp.SetIJ(t,i,j);//записываем значение в таблицу

             }

         }
    }
    catch (const error message){
            if (message == incorrec_data)
                throw;//повторная генерацтя из вне функции
    }
    return tmp;
}

//помещает в таблицу содержимое матрицы
void MatrixToTable(Matrix &matrix, QTableWidget *table, int s){
    for (int i = 0; i<table->rowCount(); i++){
        for (int j = 0; j<table->columnCount(); j++){
            QString str = QString::number(matrix.GetIJ(i,j), 'f', s);
            table->setItem(i, j, new QTableWidgetItem(str));
        }
    }
}

#endif // SOMEFUNCTION_H
