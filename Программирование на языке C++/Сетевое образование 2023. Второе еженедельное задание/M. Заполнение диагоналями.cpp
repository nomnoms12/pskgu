#include <iostream>

int main() {
    int n, m, x = 0;
    std::cin >> n >> m;

    int **a = new int *[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
    }

    for (int k = 0; k < m; ++k) {
        for (int i = 0, j = k; i < n && j >= 0; ++i, --j) {
            a[i][j] = x++;
        }
    }

    for (int k = 1; k < n; ++k) {
        for (int i = k, j = m - 1; i < n && j >= 0; ++i, --j) {
            a[i][j] = x++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i) {
        delete[] a[i];
    }

    delete[] a;
}
