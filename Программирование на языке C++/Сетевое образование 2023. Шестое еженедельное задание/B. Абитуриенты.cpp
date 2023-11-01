#include <algorithm>
#include <iostream>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    auto scores = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    std::sort(scores, scores + n);

    auto windows = new int[n - k + 1];
    for (int i = 0; i < n - k + 1; ++i) {
        windows[i] = scores[i + k - 1] - scores[i];
    }

    int scope = 0;

    for (int i = 0; i < n - k + 1; i += k) {
        int min_window_scope = windows[i];
        for (int j = i; j < i + k && j < n - k + 1; ++j) {
            if (windows[j] < min_window_scope) {
                min_window_scope = windows[j];
            }
        }
        if (min_window_scope > scope) {
            scope = min_window_scope;
        }
    }

    std::cout << scope;
    delete[] scores;
    delete[] windows;
}
