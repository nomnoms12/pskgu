#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int *numbers = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    for (int x, j, i = 1; i < n; ++i) {
        for (j = i, x = numbers[i]; j > 0 && x < numbers[j - 1]; --j) {
            numbers[j] = numbers[j - 1];
        }
        numbers[j] = x;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << ' ';
    }

    delete[] numbers;
}
