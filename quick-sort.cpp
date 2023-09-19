#include <iostream>

int partition(char arr[], int low, int high) {
    int pivot = arr[high];
    int left = low, right = high - 1;
    while(true) {
        while(left <= right && arr[left] < pivot) left ++;
        while(left <= right && arr[right] > pivot) right --;
        if(left >= right) break;
        std::swap(arr[left], arr[right]);
        left ++;
        right --; 
    }
    std::swap(arr[left], arr[high]);
    return left;
}

void quickSort(char arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    char arr[] = {'E', 'X', 'A', 'M', 'P', 'L', 'E'};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    std::cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}