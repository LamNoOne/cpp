#include <iostream>

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// void insertionSort(int arr[], int n) {
//     int key, i, j;
//     for(int i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;
//         while(j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }

//     printArray(arr, n);
// }

void insertionSort(int arr[], int n) {
    int l, r, m, k, key;
    for(k = 1; k < n; k++) {
        key = arr[k]; l = 0; r = k - 1;
        while(l <= r) {
            m = (l + r) / 2;
            if(key < arr[m]) r = m - 1;
            else l = m + 1;
        }

        for(int j = k - 1; j >= l; j --)
            arr[j + 1] = arr[j];
        arr[l] = key;
    }
    printArray(arr, n);
}

int main() {
    int arr[] = {45, 56, 34, 23, 11, 9 ,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, arr_size);
}

/**
 * 
 * B1: Khởi tạo mảng có dãy con đã sắp xếp có k = 1 phần tử, phần tử có chỉ số 0
 * B2: Duyệt từng phần tử của mảng từ phần tử thứ 2, tại mỗi lần duyệt phần tử ở chỉ
 * số i thì đặt phần tử vào một vị trí nào đó trong đoạn [0,...i] sao cho đoạn đó
 * vẫn đảm bảo tính chất tăng dần. Sau mỗi lần duyệt, số phần tử đã sắp xếp k trong
 * mảng tăng thêm 1 phần tử
 * B3: Lặp cho tới khi duyệt hết tất cả các phần tử trong mảng 
*/