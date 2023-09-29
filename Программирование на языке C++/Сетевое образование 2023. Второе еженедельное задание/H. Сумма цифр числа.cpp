#include <iostream>

int main() {
    uint64_t n;
    std::cin >> n;

    unsigned sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }

    std::cout << sum;
}
