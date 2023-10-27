#include <iostream>
#include <iomanip>
#include <cmath>

double Len(int x1, int y1, int x2, int y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << Len(x1, y1, x2, y2) + Len(x2, y2, x3, y3) + Len(x3, y3, x1, y1);
}
