#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << (a + b + (a - b) * ((2 * (a - b) + 1) % 2)) / 2;
}
