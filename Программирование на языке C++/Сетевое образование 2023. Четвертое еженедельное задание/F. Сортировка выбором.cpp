#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int *numbers = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    for (int i = 0, min = i; i < n; min = ++i) {
        for (int j = i; j < n; ++j) {
            if (numbers[j] < numbers[min]) {
                min = j;
            }
        }

        int tmp = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = tmp;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << ' ';
    }

    delete[] numbers;
}
