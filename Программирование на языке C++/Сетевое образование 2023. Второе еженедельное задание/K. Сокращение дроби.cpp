#include <iostream>
#include <numeric>

int main() {
    int a, b;
    std::cin >> a >> b;

    int gcd = std::gcd(a, b);
    std::cout << a / gcd << " " << b / gcd;
}
