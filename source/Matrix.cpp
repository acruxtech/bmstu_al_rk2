#include <stdexcept>
#include <iostream>
#include "../include/Matrix.hpp"


Matrix::Matrix(int n, int m) {
    this->n = n;
    this->m = m;
    data = new int*[m];
    for (int i = 0; i < m; ++i) {
        data[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            data[i][j] = 0;
        }
    }
}


Matrix Matrix::add(const Matrix& b) {
    if (this->n != b.n || this->m != b.m) {
        throw std::invalid_argument("Incorrect input matrix (different dimensions)");
    }

    Matrix res = Matrix(this->n, this->m);
    for (int i = 0; i < this->m; ++i) {
        for (int j = 0; j < this->n; ++j) {
            res.data[i][j] = this->data[i][j] + b.data[i][j];
        }
    }

    return res;
}


void Matrix::print() {
    for (int i = 0; i < this->m; ++i) {
        for (int j = 0; j < this->n; ++j) {
            std::cout << this->data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


