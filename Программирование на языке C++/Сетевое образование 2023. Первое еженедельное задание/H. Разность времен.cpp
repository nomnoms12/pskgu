#include <iostream>

int main() {
  int h1, m1, s1, h2, m2, s2;
  std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

  int t1 = h1 * 3600 + m1 * 60 + s1;
  int t2 = h2 * 3600 + m2 * 60 + s2;

  std::cout << t2 - t1;
}
