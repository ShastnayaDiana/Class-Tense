#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>

using namespace std;
enum error {impossible, mul_impossible, size_0, incorrec_data};
class Matrix
{
private:
    vector<vector<float>> matrix;

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

    Matrix(const Matrix &m)
    {
        set_size(m.width(), m.height());

            for (auto i = 0; i < m.height(); i++)
                for (auto j = 0; j < m.width(); j++)
                    matrix[i][j] = m.matrix[i][j];
     }

     unsigned int width() const {
            return matrix.size();
     }
        unsigned int height() const {
           if (width() != 0)
              return matrix[0].size();
           else throw size_0;
     }
        void SetIJ(float, int, int);
        float GetIJ(int, int);
        Matrix operator*(const int);
        Matrix operator+ (const Matrix &);
        Matrix operator- (const Matrix &);
        Matrix operator*(const Matrix &);
        Matrix random();
        float Det(const Matrix &, int);
        void transposed();
        Matrix Minor(const Matrix &, int, int);
        Matrix Soul(Matrix &, float, int);
        Matrix reverse(const Matrix &, int);
        Matrix Swape_Row(int, int);
};

#endif // MATRIX_H
