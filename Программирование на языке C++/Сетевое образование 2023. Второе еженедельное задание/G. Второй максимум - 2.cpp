#include <iostream>

int main() {
    int n;
    int max1 = 1;
    int max2 = 1;

    do {
        std::cin >> n;

        if (n > max1) {
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max2 = n;
        }
    } while (n);

    std::cout << max2;
}
