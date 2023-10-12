#include <iostream>

int main() {
    int64_t x, y;
    std::cin >> x >> y;

    int64_t a = x;
    int64_t b = y;

    while (a && b) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }

    int64_t gcd = a + b;
    int64_t lcm = x * y / gcd;

    std::cout << gcd << " " << lcm;
}
