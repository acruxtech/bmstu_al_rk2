class Matrix {
public:
    int** data = nullptr;
    int n = 0;                  // lines
    int m = 0;                  // columns

    Matrix(int n, int m);

    // add to matrix new matrix and return new
    Matrix add(const Matrix& b);

    void print();
};
