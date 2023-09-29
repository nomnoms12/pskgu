#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int first = 0;
    int second = 1;

    for (int k = 2; k <= n; ++k) {
        int tmp = first;
        first = second;
        second += tmp;
    }

    if (n == 0) {
        std::cout << first;
    } else {
        std::cout << second;
    }
}
