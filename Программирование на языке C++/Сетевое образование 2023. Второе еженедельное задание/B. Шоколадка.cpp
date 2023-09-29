#include <iostream>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::cout << ((k % n == 0 || k % m == 0) && k < n * m ? "YES" : "NO");
}
