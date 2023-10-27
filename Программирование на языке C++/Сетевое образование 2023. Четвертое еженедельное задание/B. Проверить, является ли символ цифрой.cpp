#include <iostream>

bool IsDigit(unsigned char c) {
    return c >= '0' && c <= '9';
}

int main() {
    unsigned char c;
    std::cin >> c;
    std::cout << (IsDigit(c) ? "yes" : "no");
}
