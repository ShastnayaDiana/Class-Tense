#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
#include <QMap>

using namespace std;
/*map <string, string> errors = {{"impossible", "Impossible operation!"},{"mul_impossible", "It is impossible to mul matrix!"},
                             {"size_0", "The size of zero can not be!"},{"incorrec_data", "Incorrect data!"}};*/
enum error {impossible, mul_impossible, size_0, incorrec_data};
class Matrix
{
private:
    vector<vector<float>> matrix;
    double n;
    int s;
public:
    Matrix();
    Matrix(unsigned int h, unsigned int w) {
        set_size(h, w);
    }

    void set_size(unsigned int h, unsigned int w) {
            matrix.resize(h);
            for (int i = 0; i < matrix.size(); i++)
                matrix[i].resize(w);
    }

    void setRows(size_t arg)
    {
        this->matrix.resize(arg);
    }

    size_t rows()const{
        return this->matrix.size();
    }

    void setColumns(size_t arg)
    {
        auto r = this->rows();
        for(auto i = 0; i < r; i++)
            this->matrix[i].resize(arg);
    }

    size_t colums()const{
        if (rows() != 0)
            return this->matrix[0].size();
        else throw size_0;
    }

    void setN(double arg){
        n = arg;
    }

    double N()const{
        return n;
    }

    void setS(int arg){
        s = arg;
    }

    int S()const{
        return s;
    }

    Matrix(const Matrix &m)
    {
        set_size(m.rows(), m.colums());

            for (auto i = 0; i < m.colums(); i++)
                for (auto j = 0; j < m.rows(); j++)
                    matrix[i][j] = m.matrix[i][j];
     }

        void SetIJ(float, int, int);
        float GetIJ(int, int);
        Matrix operator*(const double);
        Matrix operator+ (const Matrix &);
        Matrix operator- (const Matrix &);
        Matrix operator*(const Matrix &);
        Matrix random();
        float Det(int);
        void transposed();
        Matrix Minor(int, int);
        Matrix Soul(float, int);//результат обратной матрицы, послед действие
        Matrix reverse(int);
        Matrix Swape_Row(int, int);
};

#endif // MATRIX_H
