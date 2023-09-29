#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a > b && a > c ? a : b > c ? b : c);
}
