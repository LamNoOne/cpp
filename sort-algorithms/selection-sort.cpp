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

void selectionSort(int arr[], int n) {
    int min_idx, i, j;
    for(i = 0; i < n - 1; i++) {
        min_idx = i;
        for(j = i + 1; j < n; j++) {
            if(arr[min_idx] > arr[j])
                min_idx = j;
        }
        if(min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
    printArray(arr, n);
}

int main() {
    int arr[] = {45, 56, 34, 23, 11, 9 ,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, arr_size);
}

/**
 * B1: Duyệt lần lượt dãy, bắt đầu từ phần tử đâu tiên của dãy, giả định phần tử đang xét có vị trí
 * là min_idx
 * B2: Duyệt từ phần tử thứ 2 trở đi, nếu trong đoạn [min_idx + 1, n - 1] tồn tại phần tử bé hơn
 * arr[min_idx] thì min_idx = vị trí phần tử đó, tiếp tục duyệt đến hết đoạn
 * B3: Sau khi tìm được phần tử bé hơn phần tử gốc, tiến hành đổi chỗ
 * B4: Lặp lại bước 1 cho đến phần tử thứ n - 2
*/