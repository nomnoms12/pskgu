#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int squares = 0;
    while (a && b) {
        if (a < b) {
            int cuts = b / a;
            b -= a * cuts;
            squares += cuts;
        } else {
            int cuts = a / b;
            a -= b * cuts;
            squares += cuts;
        }
    }

    std::cout << squares;
}
