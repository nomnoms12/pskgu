#include <iostream>

int Fibonacci(int n) {
    return n == 1 || n == 2 ? 1 : 1 + Fibonacci(n - 2) + Fibonacci(n - 1);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << Fibonacci(n);
}
