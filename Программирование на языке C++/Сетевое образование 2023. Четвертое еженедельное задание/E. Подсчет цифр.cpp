#include <iostream>

int Digits(const char string[]) {
    int count = 0;
    for (int i = 0; string[i] != 0; ++i) {
        count += string[i] >= '0' && string[i] <= '9';
    }

    return count;
}

int main() {
    char string[1000];
    std::cin >> string;
    std::cout << Digits(string);
}
