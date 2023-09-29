#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    for (int n = a; n <= b; ++n) {
        if (n % 2 == 0) {
            std::cout << n << " ";
        }
    }
}
