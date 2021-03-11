#include <iostream>

/*
 * Напишете програма, която приема на входа три аргумента - числата m, n, a.
 * Програмата да принтира матрица с размер (m*n), чийто елементи са задедени по следният начин:
 * Aij = {0 | i != j}; Aij = {a | i == j}
 */

int** create_matrix(int m = 1, int n = 1) {
    int** matrix = new int*[m];

    for(int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    return matrix;
}

void delete_matrix(int** matrix, int m) {
    for(int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void fill_matrix(int** matrix, int m, int n, int a = 1) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = a;
            }
        }
    }
}

void print_matrix(int** matrix, int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    int m = 0, n = 0, a = 0;
    std::cin >> m >> n >> a;

    int** matrix = create_matrix(m, n);

    fill_matrix(matrix, m, n, a);

    print_matrix(matrix, m, n);

    delete_matrix(matrix, m);
    return 0;
}