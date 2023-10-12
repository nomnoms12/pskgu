#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int **matrix = new int *[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n]{};
    }

    for (int k = 0; k < n; ++k) {
        for (int j = std::max(0, k * 2 - 1); j < n - k * 2; ++j) {
            matrix[k * 2][j] = 1;
        }
        for (int i = k * 2; i < n - k * 2; ++i) {
            matrix[i][n - k * 2 - 1] = 1;
        }
        for (int j = n - k * 2 - 1; j >= k * 2; --j) {
            matrix[n - k * 2 - 1][j] = 1;
        }
        for (int i = n - k * 2 - 1; i > k * 2 + 1; --i) {
            matrix[i][k * 2] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j];
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }

    delete[] matrix;
}
