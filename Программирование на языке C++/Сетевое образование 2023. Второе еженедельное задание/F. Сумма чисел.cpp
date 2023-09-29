#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int k, i = 0; i < n; ++i) {
        std::cin >> k;
        sum += k;
    }

    std::cout << sum;
}
