#include <iostream>
#include <algorithm>

int main() {
    int n, m, k, count = 0;
    std::cin >> n >> m;

    int *rafts = new int[n * m];
    for (int i = 0; i < n * m; ++i) {
        std::cin >> rafts[i];
    }

    std::cin >> k;

    int *passengers = new int[k];
    for (int i = 0; i < k; ++i) {
        std::cin >> passengers[i];
    }

    std::sort(rafts, rafts + n * m, std::greater{});
    std::sort(passengers, passengers + k, std::greater{});

    for (int i = 0; i < n * m; ++i) {
        for (int j = 0; j < k; ++j) {
            if (rafts[i] && passengers[j] && rafts[i] >= passengers[j]) {
                ++count;
                rafts[i] = passengers[j] = 0;
            }
        }
    }

    std::cout << count;
    delete[] rafts;
    delete[] passengers;
}
