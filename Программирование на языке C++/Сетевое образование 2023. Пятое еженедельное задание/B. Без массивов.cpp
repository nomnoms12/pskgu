#include <iostream>

void Reverse(int n) {
    int x;
    std::cin >> x;

    if (n != 1) {
        Reverse(n - 1);
    }

    std::cout << x << " ";
}

int main() {
    int n;
    std::cin >> n;
    Reverse(n);
}
