#include <iostream>

int main() {
    int n, m, w;
    std::cin >> n >> m >> w;

    int **field = new int *[n + 2];
    for (int i = 0; i < n + 2; ++i) {
        field[i] = new int[m + 2]{};
    }

    for (int x, y, i = 0; i < w; ++i) {
        std::cin >> x >> y;
        field[x][y] = -1;
    }

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            if (field[i][j] != -1) {
                field[i][j] += field[i - 1][j - 1] == -1;
                field[i][j] += field[i - 1][j] == -1;
                field[i][j] += field[i - 1][j + 1] == -1;
                field[i][j] += field[i][j - 1] == -1;
                field[i][j] += field[i][j + 1] == -1;
                field[i][j] += field[i + 1][j - 1] == -1;
                field[i][j] += field[i + 1][j] == -1;
                field[i][j] += field[i + 1][j + 1] == -1;
            }
        }
    }

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            if (field[i][j] == -1) {
                std::cout << "* ";
            } else {
                std::cout << field[i][j] << " ";
            }
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n + 2; ++i) {
        delete[] field[i];
    }

    delete[] field;
}
