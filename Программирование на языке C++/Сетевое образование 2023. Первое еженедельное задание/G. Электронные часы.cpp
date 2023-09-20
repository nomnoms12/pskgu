#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int h = n / 3600 % 24;
  int m = n / 60 % 60;
  int s = n % 60;

  std::cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
}
