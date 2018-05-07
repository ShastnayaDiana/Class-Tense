#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "matrix.h"
#include "somefunction.h"
#include<fstream>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    signal_after_comma = ui->spinBox_comma->text().toInt();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void det_(QTableWidget *table, Matrix &m, QLabel *l, int s){
    if ((m.rows() !=0) && (m.colums()!=0)){
       if (m.rows() == m.colums()){//проверка размера матрицы
          try{
                //вычисляем определитель
                double det = TableToMatrix(table).Det(m.rows());
                QString str = QString::number(det, 'f', s);//перевод в строку вещ.числа
                l->setText(str);//вывод строки в метку
              }
           catch(const error message){
             if (message == incorrec_data)
                   ShowErrorMsg(incorrec_data);
           }
        }
     }
}

void MainWindow::on_Button_detA_clicked()
{
    det_(ui->MatrixA_tableWidget, a, ui->label_detA, signal_after_comma);
}

void MainWindow::on_Button_detB_clicked()
{
    det_(ui->MatrixB_tableWidget, b, ui->label_detB, signal_after_comma);
}

void transpon(QTableWidget *table, QTableWidget *result, Matrix &m, int s){
    if ((m.rows()!=0) && (m.colums()!=0)){
       try{
               Matrix tmp = TableToMatrix(table);
               tmp.transposed();
               result->setRowCount(m.colums());
               result->setColumnCount(m.rows());
               MatrixToTable(tmp, result, s);
            }
       catch(const error message){
            if (message == incorrec_data)
                 ShowErrorMsg(incorrec_data);
       }
    }
}

void MainWindow::on_Button_transposeA_clicked()
{
    transpon(ui->MatrixA_tableWidget, ui->result_tableWidget, a, signal_after_comma);
}

void MainWindow::on_Button_transposeB_clicked()
{
    transpon(ui->MatrixB_tableWidget, ui->result_tableWidget, b, signal_after_comma);
}

void MainWindow::on_Button_sum_clicked()
{
    if ((a.rows()!=0) && (a.colums()!=0) && (b.rows()!=0) && (b.colums()!=0)){
        try{
               a = TableToMatrix(ui->MatrixA_tableWidget);
               b = TableToMatrix(ui->MatrixB_tableWidget);
               res = a+b;
               ui->result_tableWidget->setRowCount(a.rows());
               ui->result_tableWidget->setColumnCount(a.colums());
               MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
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
    if ((a.rows()!=0) && (a.colums() !=0) && (b.rows()!=0) && (b.colums()!=0)){
        try{
               a = TableToMatrix(ui->MatrixA_tableWidget);
               b = TableToMatrix(ui->MatrixB_tableWidget);
               res = a - b;
               ui->result_tableWidget->setRowCount(a.rows());
               ui->result_tableWidget->setColumnCount(a.colums());
               MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
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
    if ((a.rows()!=0) && (a.colums()!=0) && (b.rows()!=0) && (b.colums()!=0)){
       try{
              a = TableToMatrix(ui->MatrixA_tableWidget);
              b = TableToMatrix(ui->MatrixB_tableWidget);
              res = a * b;
              ui->result_tableWidget->setRowCount(a.rows());
              ui->result_tableWidget->setColumnCount(a.colums());
              MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
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
    if ((a.rows()!=0) && (a.colums()!=0)){
        try{
              a = TableToMatrix(ui->MatrixA_tableWidget);
              res = a * n;
              ui->result_tableWidget->setRowCount(a.rows());
              ui->result_tableWidget->setColumnCount(a.colums());
              MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
           }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);

        }
    }
}

void MainWindow::on_Button_mul_onB_clicked()
{
    if ((b.rows()!=0) && (b.colums()!=0)){
        try{
              b = TableToMatrix(ui->MatrixB_tableWidget);
              res = b * n;
              ui->result_tableWidget->setRowCount(b.rows());
              ui->result_tableWidget->setColumnCount(b.colums());
              MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
           }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);
        }

    }
}

void MainWindow::on_Button_inverseA_clicked()
{
    if ((a.rows()!=0) && (a.colums()!=0)){
        try{
            a = TableToMatrix(ui->MatrixA_tableWidget);
            res = a.reverse(a.rows());
            ui->result_tableWidget->setRowCount(a.rows());
            ui->result_tableWidget->setColumnCount(a.colums());
            MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
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
    if ((b.rows()!=0) && (b.colums()!=0)){
        try{
            b = TableToMatrix(ui->MatrixB_tableWidget);
            res = b.reverse(b.rows());
            ui->result_tableWidget->setRowCount(b.rows());
            ui->result_tableWidget->setColumnCount(b.colums());
            MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
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
         res = TableToMatrix(ui->result_tableWidget);
         Matrix t(res);
         MatrixToTable(t, ui->MatrixA_tableWidget, signal_after_comma);
        }
   catch (const error message){
        if (message == incorrec_data)
              ShowErrorMsg(incorrec_data);
        }
}

void MainWindow::on_Button_ToB_clicked()
{
    try{
          res = TableToMatrix(ui->result_tableWidget);
          Matrix t(res);
          MatrixToTable(t, ui->MatrixB_tableWidget, signal_after_comma);
         }
     catch (const error message){
           if (message == incorrec_data)
                 ShowErrorMsg(incorrec_data);
         }
}
void Rows_(QTableWidget *table, Matrix &m, int arg)
{
    table->setRowCount(arg);
    for(size_t i = 0; i < arg; i++)
    {
        QTableWidgetItem *cell;
        if (table->item(i,0) == NULL)
        {
            cell = new QTableWidgetItem();
            table->setItem(i, 0, cell);
        }
    }
    m.setRows(arg);
}

void MainWindow::on_rowsA_spinBox_valueChanged(int arg1)
{
   Rows_(ui->MatrixA_tableWidget, a, arg1);

}

void Column_(QTableWidget *table, Matrix &m, int arg)
{
    table->setColumnCount(arg);
    for(size_t i = 0; i < arg; i++)
    {
        QTableWidgetItem *cell;
        table->horizontalHeader()->resizeSection(i,50);
        if (table->item(0,i) == NULL)
        {
            cell = new QTableWidgetItem();
            table->setItem(0, i, cell);
        }
    }
    m.setColumns(arg);
}

void MainWindow::on_columsA_spinBox_valueChanged(int arg1)
{
    Column_(ui->MatrixA_tableWidget, a, arg1);

}

void MainWindow::on_rowsB_spinBox_valueChanged(int arg1)
{
    Rows_(ui->MatrixB_tableWidget, b, arg1);
}

void MainWindow::on_columsB_spinBox_valueChanged(int arg1)
{
     Column_(ui->MatrixB_tableWidget, b, arg1);
}


void MainWindow::on_Button_randomA_clicked()
{
    if ((a.rows()!=0) && (a.colums()!=0))
        a.random();
    MatrixToTable(a, ui->MatrixA_tableWidget, signal_after_comma);
}

void MainWindow::on_Button_randomB_clicked()
{
    if ((b.rows()!=0) && (b.colums()!=0))
        b.random();
    MatrixToTable(b, ui->MatrixB_tableWidget, signal_after_comma);
}

void MainWindow::on_doubleSpinBox_A_valueChanged(double arg1)
{
    ui->doubleSpinBox_A->setValue(arg1);
    a.setN(arg1);
    n = a.N();
}

void MainWindow::on_doubleSpinBox_B_valueChanged(double arg1)
{
    ui->doubleSpinBox_B->setValue(arg1);
    b.setN(arg1);
    n = b.N();
}

void MainWindow::on_spinBox_comma_valueChanged(int arg1)
{
    ui->spinBox_comma->setValue(arg1);
    res.setS(arg1);
    signal_after_comma = res.S();
}

void MainWindow::on_Button_ofstream_clicked()
{
    res = TableToMatrix(ui->result_tableWidget);
    QString filename = QFileDialog::getOpenFileName(this, QString::fromUtf8("Открыть"), QDir::currentPath(), "*.txt");
    QFile f(filename);
    QTextStream st(&f);
    st << res.rows() << "  " << res.colums() << " \r\n";
    if (f.open(QIODevice::WriteOnly)){
        for (size_t i = 0; i < res.rows(); i++)
        {
             for (size_t j = 0; j < res.colums(); j++)
                   st << res.GetIJ(i, j) << "  ";
             st << "\r\n";
        }
    }
    f.close();
}

void MainWindow::on_Button_ifstream_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, QString::fromUtf8("Открыть"), QDir::currentPath(), "*.txt");
    QFile f(filename);
    QTextStream st(&f);
    float d;
    int row, colum;
    if (f.open(QIODevice::ReadOnly)){
        while(!f.atEnd()){
            st >> row;
            st >> colum;
            res.setColumns(colum);
            res.setRows(row);
            Column_(ui->result_tableWidget, res, res.colums());
            Rows_(ui->result_tableWidget, res, res.rows());
            for (size_t i = 0; i < res.rows(); i++)
                for (size_t j = 0; j < res.colums(); j++)
                {
                    st >> d;
                    res.SetIJ(d, i, j);
                }
        }
    }
    MatrixToTable(res, ui->result_tableWidget, signal_after_comma);
    f.close();
}
