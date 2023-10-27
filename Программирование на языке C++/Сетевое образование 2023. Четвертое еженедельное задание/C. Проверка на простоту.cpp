#include <iostream>
#include <cmath>

bool IsPrime(int n) {
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << (IsPrime(x) ? "prime" : "composite");
}
