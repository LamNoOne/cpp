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

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = n - 1; j > i; j--) {
            if(arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]);
        }
    }

    printArray(arr, n);
}

int main() {
    int arr[] = {45, 56, 34, 23, 11, 9 ,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, arr_size);
}

/**
 * 
 * B1: Dãy các khóa sẽ được duyệt từ cuối dãy lên phần tử đầu tiên của dãy (phần tử thứ nhất)                                                                                                                                                    
 * B2: Nếu tồn tại cặp nghịch thế, đổi chỗ, 
 * Sau khi duyệt xong, phần tử đầu tiên sẽ là phần tử bé nhất
 * B3: Tiếp tục lại bước 1 với phần tử đầu tiên là phần tử thứ 2(vì phần tử thứ 1 đã đúng vị trí)
*/