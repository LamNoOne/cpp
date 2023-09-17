#include <iostream>

int maxNumber(int a, int b)
{
    return a > b ? a : b;
}

int maxArray(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return maxNumber(maxArray(arr, n - 1), arr[n - 1]);
}

int main()
{
    int arr[] = {9, 1, 3, 11, 23, 7, 8};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout << maxArray(arr, arr_size) << std::endl;
}