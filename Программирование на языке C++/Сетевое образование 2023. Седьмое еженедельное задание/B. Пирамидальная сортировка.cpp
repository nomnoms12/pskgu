#include <iostream>

void Heapify(int arr[], int size, int ind) {
    int largest = ind;
    int left = 2 * ind + 1;
    int right = 2 * ind + 2;
    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != ind) {
        int tmp = arr[ind];
        arr[ind] = arr[largest];
        arr[largest] = tmp;

        Heapify(arr, size, largest);
    }
}

void HeapSort(int arr[], int size) {
    for (int i = size / 2 - 1; i >= 0; --i) {
        Heapify(arr, size, i);
    }
    for (int i = size - 1; i >= 0; --i) {
        int tmp = arr[0];
        arr[0] = arr[i];
        arr[i] = tmp;
        Heapify(arr, i, 0);
    }
}

int main() {
    int n;
    std::cin >> n;

    auto *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    HeapSort(arr, n);
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }

    delete[] arr;
}
