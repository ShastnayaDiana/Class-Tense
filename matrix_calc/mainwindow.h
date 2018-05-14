#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <matrix.h>
#include <QTabWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Button_detA_clicked();

    void on_Button_detB_clicked();

    void on_Button_transposeA_clicked();

    void on_Button_transposeB_clicked();

    void on_Button_sum_clicked();

    void on_Button_sub_clicked();

    void on_Button_mul_clicked();

    void on_Button_mul_onA_clicked();

    void on_Button_mul_onB_clicked();

    void on_Button_inverseA_clicked();

    void on_Button_ToA_clicked();

    void on_Button_ToB_clicked();

    void on_Button_inverseB_clicked();

    void on_rowsA_spinBox_valueChanged(int arg1);

    void on_columsA_spinBox_valueChanged(int arg1);

    void on_rowsB_spinBox_valueChanged(int arg1);

    void on_columsB_spinBox_valueChanged(int arg1);

    void on_Button_randomA_clicked();

    void on_Button_randomB_clicked();

    void on_doubleSpinBox_A_valueChanged(double arg1);

    void on_doubleSpinBox_B_valueChanged(double arg1);

    void on_spinBox_comma_valueChanged(int arg1);

    void on_Button_ofstream_clicked();

    void on_Button_ifstream_clicked();

private:
    Ui::MainWindow *ui;
    Matrix a;
    Matrix b;
    Matrix res;
    double n;
    int signal_after_comma;
};

#endif // MAINWINDOW_H
