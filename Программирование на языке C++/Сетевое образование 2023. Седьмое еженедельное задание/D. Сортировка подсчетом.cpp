#include <iostream>

int main() {
    int count_sort[200]{};

    int n;
    std::cin >> n;

    auto measurements = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> measurements[i];
        count_sort[100 + measurements[i]]++;
    }

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < count_sort[i]; j++) {
            std::cout << i - 100 << "\n";
        }
    }

    delete[] measurements;
}
