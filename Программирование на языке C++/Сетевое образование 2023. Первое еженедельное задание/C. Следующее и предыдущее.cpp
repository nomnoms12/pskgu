#include <iostream>

int main() {
  int x;
  std::cin >> x;

  std::cout << "The next number for the number " << x << " is " << x + 1 << ".\n";
  std::cout << "The previous number for the number " << x << " is " << x - 1 << ".\n";
}
