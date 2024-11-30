#include <random>
#include <iostream>
#include "../include/Matrix.hpp"


int main() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(-10,10);

    Matrix a = Matrix(3, 4);
    for (int i = 0; i < a.m; ++i) {
        for (int j = 0; j < a.n; ++j) {
            a.data[i][j] = dist(rng);
        }
    }
    std::cout << "Matrix a:" << std::endl;
    a.print();

    Matrix b = Matrix(3, 4);
    for (int i = 0; i < a.m; ++i) {
        for (int j = 0; j < a.n; ++j) {
            b.data[i][j] = dist(rng);
        }
    }
    std::cout << "Matrix b:" << std::endl;
    b.print();
    
    Matrix res = a.add(b);
    std::cout << "Result matrix:" << std::endl; 
    res.print();

    return 0;
}
