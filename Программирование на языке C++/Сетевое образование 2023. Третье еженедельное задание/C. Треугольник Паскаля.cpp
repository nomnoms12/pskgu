#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int **a = new int *[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || j == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
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
