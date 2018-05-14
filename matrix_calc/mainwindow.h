#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_Button_sgenA_clicked();

    void on_Button_sgenB_clicked();

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
