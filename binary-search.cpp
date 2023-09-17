/*@LamNoOne*/
#include <iostream>

/*
int binarySearch(int arr[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
*/

int binarySearch(int arr[], int x, int low, int high) {
    if(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) return binarySearch(arr, x, mid + 1, high);
        return binarySearch(arr, x, low, mid - 1);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, x, 0, n - 1);
    if (result == -1)
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "Element is found at index " << result << std::endl;
    }
}