#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int *results = new int[n];
    for (int i = 0; i < n; ++i) {
        results[i] = 0;
    }

    int max = 0;
    for (int i = 0; i < n; ++i) {
        for (int result, j = 0; j < m; ++j) {
            std::cin >> result;
            if (result > results[i]) {
                results[i] = result;
            }
            if (result > max) {
                max = result;
            }
        }
    }

    int winners = 0;
    for (int i = 0; i < n; ++i) {
        if (results[i] == max) {
            winners++;
        }
    }

    std::cout << winners << "\n";

    for (int i = 0; i < n; ++i) {
        if (results[i] == max) {
            std::cout << i << " ";
        }
    }

    delete[] results;
}
