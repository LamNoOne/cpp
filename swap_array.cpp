#include <iostream>

int *copyArray(int arr[], int brr[], int left, int right)
{
    int n = right - left + 1;
    brr = new int[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[left++];
    }
    return brr;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void swapArray(int arr[], int m)
{
    if (m == 1)
    {
        printArray(arr, m);
    }
    else
    {
        int left = 0, right = m;
        int *brr = copyArray(arr, brr, left, right);
        for(int i = m - 1; i >= 0; i --) {
            arr = copyArray(brr, arr, left, right);
            swap(arr[m - 1], arr[i]);
            swapArray(arr, m - 1);
            printArray(arr, m);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    swapArray(arr, arr_size);
}