#include <iostream>

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void interchangeSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
    printArray(arr, n);
}

int main() {
    int arr[] = {45, 56, 34, 23, 11, 9 ,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    interchangeSort(arr, arr_size);
}

/**
 * B1: Xuất phát từ phần tử đầu danh sách, tìm tất cả các cặp nghịch thế chứa phần tử này
 * B2: Triệt tiêu chúng bằng cách đổi chỗ phần tử trong cặp nghịch thế
 * B3: Lặp lại xử lý trên với phần tử kế tiếp trong danh sách
*/