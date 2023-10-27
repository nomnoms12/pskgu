#include <iostream>

int Gcd(int a, int b) {
    while (a && b) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }

    return a + b;
}

int main() {
    int n, gcd;
    std::cin >> n >> gcd;

    for (int x, i = 0; i < n - 1; ++i) {
        std::cin >> x;
        gcd = Gcd(x, gcd);
    }

    std::cout << gcd;
}
