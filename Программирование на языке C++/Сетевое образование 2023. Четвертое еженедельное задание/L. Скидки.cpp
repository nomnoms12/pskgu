#include <iostream>
#include <algorithm>

int main() {
    int n, money = 0;
    std::cin >> n;

    int *products = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> products[i];
    }

    std::sort(products, products + n, std::greater{});

    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 3 != 0) {
            money += products[i];
        }
    }

    std::cout << money;
    delete[] products;
}
