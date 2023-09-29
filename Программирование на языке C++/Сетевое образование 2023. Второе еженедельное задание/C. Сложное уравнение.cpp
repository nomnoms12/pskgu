#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a == 0 && b == 0) {
        std::cout << "INF";
    } else if (b % a == 0 && c * (-b / a) + d != 0) {
        std::cout << -b / a;
    } else {
        std::cout << "NO";
    }
}
