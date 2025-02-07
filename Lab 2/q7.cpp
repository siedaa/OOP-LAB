#include <iostream>
using namespace std;

void input(int **ptr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter the element at index [" << i << "][" << j << "]: ";
            cin >> ptr[i][j];
        }
    }
}

int **matricesMultiplication(int **mat1, int **mat2, int r1, int c1, int c2) {
    cout << "\nMultiplying matrices...\n";

    int **result = new int *[r1];
    for (int i = 0; i < r1; i++) {
        result[i] = new int[c2]();
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return result;
}

void printMatrix(int **matrix, int rows, int cols) {
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void deAllocateMemory(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int r1, c1, r2, c2;
    
    cout << "Enter no of rows for matrix 1: ";
    cin >> r1;
    cout << "Enter no of cols for matrix 1: ";
    cin >> c1;

    cout << "Enter no of rows for matrix 2: ";
    cin >> r2;
    cout << "Enter no of cols for matrix 2: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible! Columns of Matrix 1 must equal rows of Matrix 2.\n";
        return 0;
    }

    cout << "\nAllocating memory for Matrix 1...\n";
    int **mat1 = new int *[r1];
    for (int i = 0; i < r1; i++) {
        mat1[i] = new int[c1];
    }

    cout << "\nTaking input for Matrix 1:\n";
    input(mat1, r1, c1);

    cout << "\nAllocating memory for Matrix 2...\n";
    int **mat2 = new int *[r2];
    for (int i = 0; i < r2; i++) {
        mat2[i] = new int[c2];
    }

    cout << "\nTaking input for Matrix 2:\n";
    input(mat2, r2, c2);

    int **resultMultiplication = matricesMultiplication(mat1, mat2, r1, c1, c2);

    printMatrix(resultMultiplication, r1, c2);

    cout << "\nDeallocating memory...\n";
    deAllocateMemory(mat1, r1);
    deAllocateMemory(mat2, r2);
    deAllocateMemory(resultMultiplication, r1);

    cout << "Memory successfully deallocated.\n";
    return 0;
}
