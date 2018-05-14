#include "matrix.h"
#include <time.h>
#include <math.h>

Matrix::Matrix()
{

}

Matrix Matrix :: Minor(int i, int j)//минор
{
   int n = this->rows();
   Matrix A(n - 1, n - 1);
   for (int k = 0; k < i; k++)
   {
       for (int m = 0; m < j; m++)
            A.matrix[k][m] = this->matrix[k][m];
       for (int m = j + 1; m < n; m++)
            A.matrix[k][m - 1] = this->matrix[k][m];
    }
    for (int k = i + 1; k < n; k++)
    {
        for (int m = 0; m < j; m++)
            A.matrix[k - 1][m] = this->matrix[k][m];
        for (int m = j + 1; m < n; m++)
            A.matrix[k - 1][m - 1] = this->matrix[k][m];
     }
     return A;
}

//обратная матрица
Matrix Matrix :: reverse(int n)
{
    Matrix mas(n, n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mas.matrix[i][j] = pow(-1, i + j) * this->Minor(i, j).Det(n-1);

    mas.transposed();
    return mas.Soul(this->Det(n),n);;
}

float Matrix :: Det(int _n)
{
   Matrix m(*this);

   //приведение матрицы к верхнетреугольному виду
   for (int i = 0; i < _n - 1; i++)
       for (int j = i + 1; j < _n; j++)
       {
           if (m.matrix[i][i] == 0)
               for (int chrow = i + 1; chrow < _n; chrow++)
                    if (m.matrix[chrow][i] != 0){
                         m = Swape_Row(i, chrow - 1);
                         break;
                     }
                double k = -m.matrix[j][i] / m.matrix[i][i];
                for (int column = i; column < _n; column++)
                    m.matrix[j][column] += m.matrix[i][column] * k;
       }

    double det = 1;
    for (int i = 0; i < _n; i++)
        det *= m.matrix[i][i];
    return det;
}

Matrix Matrix::Swape_Row(int row1, int row2)
{
   Matrix changed(*this);

   if (row1 != row2 && row1 < this->rows() && row2 < this->rows()){
       double temp;
       for (int j = 0; j < changed.colums(); j++){
           temp = changed.matrix[row1][j];
           changed.matrix[row1][j] = changed.matrix[row2][j];
           changed.matrix[row2][j] = temp;
        }
    }
    return changed;
}

//результат обратной матрица вычисляется
Matrix Matrix :: Soul(float det_, int size)
{
    Matrix mas_rev(size, size);
    if (det_ == 0)
        throw impossible;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            mas_rev.matrix[i][j] = (1 / det_) * this->matrix[i][j];
    return mas_rev;
}

//оператор вычитания
Matrix Matrix::operator-(const Matrix &matr)
{
    if (rows() != matr.rows() || colums() != matr.colums())
        throw impossible;

    Matrix result(*this);
    for (auto i = 0; i < rows(); i++) {
        for (auto j = 0; j < colums(); j++)
            result.matrix[i][j] -= matr.matrix[i][j];
    }
    return result;
}

void Matrix :: SetIJ(float val, int i, int j) {
     matrix[i][j] = val;
}

float Matrix :: GetIJ(int i, int j) {
    return matrix[i][j];
}

//оператор сложения
Matrix Matrix::operator+(const Matrix &matr)
{
    if (rows() != matr.rows() || colums() != matr.colums())
        throw impossible;

    Matrix result(*this);
    for (auto i = 0; i < rows(); i++)
        for (auto j = 0; j < colums(); j++)
            result.matrix[i][j] += matr.matrix[i][j];
    return result;
}

//умнжение матрицы на число
Matrix Matrix::operator*(const double m)
{
   Matrix result(*this);
   for (auto i = 0; i < rows(); i++)
       for (auto j = 0; j < colums(); j++)
            result.matrix[i][j] *= m;
    return result;
}

//умножение матриц
Matrix Matrix::operator*(const Matrix &matr)
{
    Matrix result(*this);
    if (colums() != matr.rows())
        throw mul_impossible;

    for (auto i = 0; i < rows(); i++)
        for (auto j = 0; j < colums(); j++)
        {
            int s = 0;
            for (auto k = 0; k < rows(); k++)
                s += matrix[i][k] * matr.matrix[k][j];
            result.matrix[i][j] = s;
        }
    return result;
}

//рандомное заполнение матриц
Matrix Matrix::random()
{
    srand(time(NULL));
    for (auto i = 0; i < rows(); i++)
        for (auto j = 0; j < colums(); j++)
            this->matrix[i][j] = (rand() % 50) / 10.0;
    return *this;
}

//транспонирование матрицы
void Matrix::transposed()
{
    float k;
    for (auto i = 0; i < rows(); i++)
        for (auto j = i; j < colums() ; j++)
        {
            k = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = k;
        }
}
