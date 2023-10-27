#include <iostream>

int main() {
    int n, swaps = 0;
    std::cin >> n;

    int *numbers = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    for (int k = 0; k < n - 1; ++k) {
        for (int i = 0; i < n - k - 1; ++i) {
            if (numbers[i] > numbers[i + 1]) {
                int tmp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = tmp;
                ++swaps;
            }
        }
    }

    std::cout << swaps;
    delete[] numbers;
}
