#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

/*
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int left = low, right = high - 1;
    while(true) {
        while(left <= right && arr[left] < pivot) left ++;
        while(left <= right && arr[right] > pivot) right ++;
        if(left >= right) break;
        swap(arr[left], arr[right]);
        left ++;
        right --;
    }
    swap(arr[left], arr[high]);
    return left;
}
*/

int partition(int arr[], int left, int right) {
    int mid = (left + right) / 2;
    int x = arr[mid];
    do {
        while(arr[left] < x) left ++;
        while(arr[right] > x) right --;
        if(left < right) {
            swap(arr[left], arr[right]);
            left ++;
            right --;
        }
    } while(left <= right);
    swap(arr[mid], arr[left]);
    return right;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    std::cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}