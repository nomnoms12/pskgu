#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    int *first = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> first[i];
    }

    for (int x, i = 0; i < k; ++i) {
        std::cin >> x;

        int left = 0;
        int right = n - 1;
        bool found = false;

        while (left <= right) {
            int mid = (right + left) / 2;
            if (first[mid] == x) {
                found = true;
                break;
            } else if (first[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        std::cout << (found ? "YES\n" : "NO\n");
    }

    delete[] first;
}
