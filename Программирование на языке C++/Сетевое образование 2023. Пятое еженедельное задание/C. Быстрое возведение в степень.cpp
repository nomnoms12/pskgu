#include <iostream>

double Pow(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n <= 2 || n % 2 != 0) {
        return a * Pow(a, n - 1);
    }

    return Pow(Pow(a, n / 2), 2);
}

int main() {
    double a;
    int n;
    std::cin >> a >> n;
    std::cout << Pow(a, n);
}
