#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j < n - i - 1) {
                std::cout << 0 << " ";
            } else if (j == n - i - 1) {
                std::cout << 1 << " ";
            } else {
                std::cout << 2 << " ";
            }
        }
        std::cout << "\n";
    }
}
