//
// Created by VASILISA on 7/26/16.
//

#include <algorithm>
#include <iostream>

using namespace std;


int inner_product(int A[], int array1size,
                  int B[], int array2size) {

    if (array1size != array2size) return -1;
    else {
        int product = 0, total = 0;
        for (int i = 0; i < array1size; i++) {
            total = A[i] * B[i];

            product = product + total;
        }
        return product;
    }
}

void matrix_multiplication(int **A, int n1, int m1, int **B, int n2, int m2, int **C, int n3, int m3) {


    if (m1 == n3) {
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m3; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n3; k++) {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
        cout << "\n\nMultiplication of Matrix A and Matrix B :\n\n";
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m3; j++) {
                cout << "\t" << C[i][j];
            }
        }
    }
    else {
        cout << "\n\nMultiplication is not possible";
    }
}


/*for(int i=0; i<n1; ++i)
    for(int j=0; j<n2; ++j)
        for (int k = 0; k < n3; ++k)
            C[i][j] += A[i][k] * B[k][j];

for(int i=0; i<n3; ++i)
    for(int j=0; j<m3; ++j) {
        cout << " " << C[i][j];
    }}*/

void matrix2D(int *Array[], int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void matrix1D(int Array[], int m) {

    for (int j = 0; j < m; j++) {
        cout << Array[j] << " ";
    }
    cout << endl;

}


int main() {
    srand(unsigned(time(NULL)));


    int vector1[4] = {0, 1, 2, 3};
    int vector2[4] = {3, 2, 1, 0};

    cout << "Vector 1: ";
    matrix1D(vector1, 4);
    cout << "Vector 2: ";
    matrix1D(vector2, 4);

    int **A;
    int **B;
    int **C;
    int n1, m1, n2, m2;
    int n3, m3;
    n1 = 4;
    m1 = 3;
    n2 = 3;
    m2 = 5;
    n3 = 0;
    m3 = 0;
    A = new int *[n1];
    B = new int *[n2];
    C = 0;
    for (int i = 0; i < n1; i++) {
        A[i] = new int[m1];
    }

    for (int i = 0; i < n2; i++) {
        B[i] = new int[m2];
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {

            A[i][j] = rand() % 9 + 0;

        }
    }

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {

            B[i][j] = rand() % 9 + 0;

        }
    }
    cout << "A: " << endl;
    matrix2D(A, n1, m1);
    cout << "B: " << endl;
    matrix2D(B, n2, m2);
    cout << "Inner product of vector1 and vector2: " << inner_product(vector1, 4, vector2, 4) << endl;
    cout << "C = A x B" << endl;
    cout << "C: " << endl;
    matrix_multiplication(A, n1, m1, B, n2, m2, C, n3, m3);
    return 0;
}