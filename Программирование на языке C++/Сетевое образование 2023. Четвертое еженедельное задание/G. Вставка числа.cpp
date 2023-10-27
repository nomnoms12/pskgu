#include <iostream>

int main() {
    int n, x, k;
    std::cin >> n;

    int *numbers = new int[n + 1];
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cin >> x >> k;
    for (int i = n; i >= k; --i) {
        numbers[i] = numbers[i - 1];
    }

    numbers[k - 1] = x;
    for (int i = 0; i < n + 1; ++i) {
        std::cout << numbers[i] << ' ';
    }

    delete[] numbers;
}
