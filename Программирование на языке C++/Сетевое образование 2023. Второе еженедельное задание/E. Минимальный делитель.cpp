#include <iostream>

int main() {
    int x;
    std::cin >> x;

    for (int k = 2; k <= x; ++k) {
        if (x % k == 0) {
            std::cout << k;
            break;
        }
    }
}
