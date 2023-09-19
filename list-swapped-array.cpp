#include <iostream>

int arr[] = {1, 2, 3};
int size = sizeof(arr) / sizeof(arr[0]);

int *flag = new int [size];
int *brr = new int [size];

void printArray(int crr[]) {
    for(int i = 0; i < size; i++) {
        std::cout << crr[i] << " ";
    }
    std::cout << std::endl;
}

void swapArray(int k) {
    for(int i = 0; i < size; i++) {
        if(!flag[i]) {
            brr[k] = arr[i];
            flag[i] = 1;
            if(k == size - 1)
                printArray(brr);
            else
                swapArray(k + 1);
            flag[i] = 0;
        }
    }
}

int main() {
    // Reset flag
    for(int i = 0; i < size; i++) {
        flag[i] = 0;
    }

    swapArray(0);
}