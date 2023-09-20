#include <iostream>
#include <cmath>

int main() {
  int a, b;
  std::cin >> a >> b;

  int min = (a + b - std::abs(a - b)) / 2;
  int max = a + b - min;

  std::cout << max % min + 1;
}
