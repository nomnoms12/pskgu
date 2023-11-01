#include <algorithm>
#include <iostream>

int Partition(int a[], int lo, int hi) {
    int pivot = a[(hi - lo) / 2 + lo];

    int i = lo - 1;
    int j = hi + 1;

    while (true) {
        do {
            ++i;
        } while (a[i] < pivot);
        do {
            --j;
        } while (a[j] > pivot);
        if (i >= j) {
            return j;
        }
        std::swap(a[i], a[j]);
    }
}

void Quicksort(int a[], int lo, int hi) {
    if (lo >= 0 && hi >= 0 && lo < hi) {
        int p = Partition(a, lo, hi);
        Quicksort(a, lo, p);
        Quicksort(a, p + 1, hi);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    Quicksort(a, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << ' ';
    }

    delete[] a;
}
