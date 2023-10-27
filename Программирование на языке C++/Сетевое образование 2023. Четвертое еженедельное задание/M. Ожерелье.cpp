#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int *rings = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> rings[i];
    }

    bool sorted = false;
    while (!sorted) {
        sorted = true;

        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n;

            if (rings[j] - rings[i] > 1) {
                sorted = false;
                std::cout << rings[i] << ' ' << rings[j] << '\n';

                int tmp = rings[i];
                rings[i] = rings[j];
                rings[j] = tmp;
            }
        }
    }

    std::cout << 0;
    delete[] rings;
}
