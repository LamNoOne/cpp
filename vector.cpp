#include <iostream>
#include <vector>

int partition(std::vector<char>& arr, int low, int high) {
    char pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<char>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<char> arr = {'E', 'X', 'A', 'M', 'P', 'L', 'E'};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    std::cout << "Danh sach da sap xep: ";
    for (char c : arr) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
