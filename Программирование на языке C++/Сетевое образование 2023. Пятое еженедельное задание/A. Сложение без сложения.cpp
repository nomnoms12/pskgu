#include <iostream>

int Sum(int a, int b) {
    return a == 0 ? b : b == 0 ? a : Sum(a - 1, b) + 1;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << Sum(a, b);
}
