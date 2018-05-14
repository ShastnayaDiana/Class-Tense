#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "matrix.h"
#include "somefunction.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_sgenA_clicked()
{
    int rows = ui->rowsA_spinBox->value();
    int cols = ui->columsA_spinBox->value();
    if ((rows!=0) && (cols!=0)){
        Matrix tmp(rows, cols);
        ui->MatrixA_tableWidget->setRowCount(rows);
        ui->MatrixA_tableWidget->setColumnCount(cols);
        MatrixToTable(tmp, ui->MatrixA_tableWidget);
    }
}

void MainWindow::on_Button_sgenB_clicked()
{
    int rows = ui->rowsB_spinBox->value();
    int cols = ui->columsB_spinBox->value();
    if ((rows!=0) && (cols!=0)){
        Matrix tmp(rows, cols);
        ui->MatrixB_tableWidget->setRowCount(rows);
        ui->MatrixB_tableWidget->setColumnCount(cols);
        MatrixToTable(tmp, ui->MatrixB_tableWidget);
     }
}

void MainWindow::on_Button_detA_clicked()
{
    int rows = ui->MatrixA_tableWidget->rowCount();
    int cols = ui->MatrixA_tableWidget->columnCount();
    if ((rows!=0) && (cols!=0)){
       if (rows == cols){//проверка размера матрицы
          try{
                Matrix tmp = TableToMatrix(ui->MatrixA_tableWidget);
                //вычисляем определитель
                double det = tmp.Det(tmp, rows);
                QString str = QString::number(det, 'f', 5);//перевод в строку вещ.числа
                ui->label_detA->setText(str);//вывод строки в метку
              }
           catch(const error message){
             if (message == incorrec_data)
                   ShowErrorMsg(incorrec_data);
           }
        }
     }
}

void MainWindow::on_Button_detB_clicked()
{
    int rows = ui->MatrixB_tableWidget->rowCount();
    int cols = ui->MatrixB_tableWidget->columnCount();
    if ((rows!=0) && (cols!=0)){
       if (rows == cols){//проверка размера матрицы
           try{
                 Matrix tmp = TableToMatrix(ui->MatrixB_tableWidget);
                //вычисляем определитель
                  double det = tmp.Det(tmp, rows);
                 QString str = QString::number(det, 'f', 5);//перевод в строку вещ.числа
                 ui->label_detB->setText(str);//вывод строки в метку
               }
            catch(const error message){
                if (message == incorrec_data)
                    ShowErrorMsg(incorrec_data);
            }
         }
    }
}

void MainWindow::on_Button_transposeA_clicked()
{
    int rows = ui->MatrixA_tableWidget->rowCount();
    int cols = ui->MatrixA_tableWidget->columnCount();
    if ((rows!=0) && (cols!=0)){
       try{
              Matrix tmp = TableToMatrix(ui->MatrixA_tableWidget);
              tmp.transposed();
               ui->result_tableWidget->setRowCount(cols);
               ui->result_tableWidget->setColumnCount(rows);
               MatrixToTable(tmp, ui->result_tableWidget);
            }
       catch(const error message){
            if (message == incorrec_data)
                 ShowErrorMsg(incorrec_data);
       }
    }

}

void MainWindow::on_Button_transposeB_clicked()
{
    int rows = ui->MatrixB_tableWidget->rowCount();
    int cols = ui->MatrixB_tableWidget->columnCount();
    if ((rows!=0) && (cols!=0)){
        try{
            Matrix tmp = TableToMatrix(ui->MatrixB_tableWidget);
            tmp.transposed();
            ui->result_tableWidget->setRowCount(cols);
            ui->result_tableWidget->setColumnCount(rows);
            MatrixToTable(tmp, ui->result_tableWidget);
           }
        catch(const error message){
            if (message == incorrec_data)
               ShowErrorMsg(incorrec_data);
        }
    }
}

void MainWindow::on_Button_sum_clicked()
{
    int rows1 = ui->MatrixA_tableWidget->rowCount();
    int cols1 = ui->MatrixA_tableWidget->columnCount();
    int rows2 = ui->MatrixB_tableWidget->rowCount();
    int cols2 = ui->MatrixB_tableWidget->columnCount();
    if ((rows1!=0) && (cols1!=0) && (rows2!=0) && (cols2!=0)){
        try{
               Matrix tmp1 = TableToMatrix(ui->MatrixA_tableWidget);
               Matrix tmp2 = TableToMatrix(ui->MatrixB_tableWidget);
               Matrix res = tmp1+tmp2;
               ui->result_tableWidget->setRowCount(rows1);
               ui->result_tableWidget->setColumnCount(cols1);
               MatrixToTable(res, ui->result_tableWidget);
            }
         catch(const error message){
                if (message == impossible)
                    ShowErrorMsg(impossible);
                if (message == incorrec_data)
                   ShowErrorMsg(incorrec_data);
            }
    }
}

void MainWindow::on_Button_sub_clicked()
{
    int rows1 = ui->MatrixA_tableWidget->rowCount();
    int cols1 = ui->MatrixA_tableWidget->columnCount();
    int rows2 = ui->MatrixB_tableWidget->rowCount();
    int cols2 = ui->MatrixB_tableWidget->columnCount();
    if ((rows1!=0) && (cols1!=0) && (rows2!=0) && (cols2!=0)){
        try{
               Matrix tmp1 = TableToMatrix(ui->MatrixA_tableWidget);
               Matrix tmp2 = TableToMatrix(ui->MatrixB_tableWidget);
               Matrix res = tmp1-tmp2;
               ui->result_tableWidget->setRowCount(rows1);
               ui->result_tableWidget->setColumnCount(cols1);
               MatrixToTable(res, ui->result_tableWidget);
            }
         catch(const error message){
                if (message == impossible)
                    ShowErrorMsg(impossible);
                if (message == incorrec_data)
                   ShowErrorMsg(incorrec_data);
            }
    }
}

void MainWindow::on_Button_mul_clicked()
{
    int rows1 = ui->MatrixA_tableWidget->rowCount();
    int cols1 = ui->MatrixA_tableWidget->columnCount();
    int rows2 = ui->MatrixB_tableWidget->rowCount();
    int cols2 = ui->MatrixB_tableWidget->columnCount();
    if ((rows1!=0) && (cols1!=0) && (rows2!=0) && (cols2!=0)){
       try{
              Matrix tmp1 = TableToMatrix(ui->MatrixA_tableWidget);
              Matrix tmp2 = TableToMatrix(ui->MatrixB_tableWidget);
              Matrix res = tmp1*tmp2;
              ui->result_tableWidget->setRowCount(rows1);
              ui->result_tableWidget->setColumnCount(cols1);
              MatrixToTable(res, ui->result_tableWidget);
           }
        catch(const error message){
              if (message == mul_impossible)
                    ShowErrorMsg(mul_impossible);
              if (message == incorrec_data)
                   ShowErrorMsg(incorrec_data);
         }
    }
}

void MainWindow::on_Button_mul_onA_clicked()
{
    int rows1 = ui->MatrixA_tableWidget->rowCount();
    int cols1 = ui->MatrixA_tableWidget->columnCount();
    QString s = ui->mulA_on->text();
    if ((rows1!=0) && (cols1!=0)){
        try{
              Matrix tmp1 = TableToMatrix(ui->MatrixA_tableWidget);
              bool ok;
              float mul = s.toDouble(&ok);
              if (!ok)
                 throw incorrec_data;
              Matrix res = tmp1 * mul;
              ui->result_tableWidget->setRowCount(rows1);
              ui->result_tableWidget->setColumnCount(cols1);
              MatrixToTable(res, ui->result_tableWidget);
           }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);

        }
    }
}

void MainWindow::on_Button_mul_onB_clicked()
{
    int rows = ui->MatrixB_tableWidget->rowCount();
    int cols = ui->MatrixB_tableWidget->columnCount();
    QString s = ui->mulB_on->text();
    if ((rows!=0) && (cols!=0)){
        try{
              Matrix tmp1 = TableToMatrix(ui->MatrixB_tableWidget);
              bool ok;
              float mul = s.toDouble(&ok);
              if (!ok)
                 throw incorrec_data;
              Matrix res = tmp1 * mul;
              ui->result_tableWidget->setRowCount(rows);
              ui->result_tableWidget->setColumnCount(cols);
              MatrixToTable(res, ui->result_tableWidget);
           }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);
        }

    }
}

void MainWindow::on_Button_inverseA_clicked()
{
    int rows = ui->MatrixA_tableWidget->rowCount();
    int cols = ui->MatrixA_tableWidget->columnCount();
    if ((rows!=0) && (cols!=0)){
        try{
            Matrix tmp1 = TableToMatrix(ui->MatrixA_tableWidget);
            tmp1 = tmp1.reverse(tmp1, rows);
            ui->result_tableWidget->setRowCount(rows);
            ui->result_tableWidget->setColumnCount(cols);
            MatrixToTable(tmp1, ui->result_tableWidget);
        }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);
            if (message == impossible)
                ShowErrorMsg(impossible);
        }
    }
}

void MainWindow::on_Button_inverseB_clicked()
{
    int rows = ui->MatrixB_tableWidget->rowCount();
    int cols = ui->MatrixB_tableWidget->columnCount();
    if ((rows!=0) && (cols!=0)){
        try{
            Matrix tmp1 = TableToMatrix(ui->MatrixB_tableWidget);
            tmp1 = tmp1.reverse(tmp1, rows);
            ui->result_tableWidget->setRowCount(rows);
            ui->result_tableWidget->setColumnCount(cols);
            MatrixToTable(tmp1, ui->result_tableWidget);
        }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);
            if (message == impossible)
                ShowErrorMsg(impossible);
        }
    }
}

void MainWindow::on_Button_ToA_clicked()
{
   try{
         Matrix tmp = TableToMatrix(ui->result_tableWidget);
         Matrix t(tmp);
         MatrixToTable(t, ui->MatrixA_tableWidget);
        }
   catch (const error message){
        if (message == incorrec_data)
              ShowErrorMsg(incorrec_data);
        }
}

void MainWindow::on_Button_ToB_clicked()
{
    try{
          Matrix tmp = TableToMatrix(ui->result_tableWidget);
          Matrix t(tmp);
          MatrixToTable(t, ui->MatrixB_tableWidget);
         }
     catch (const error message){
           if (message == incorrec_data)
                 ShowErrorMsg(incorrec_data);
         }
}



