#include <iostream>

int maxNumber(int a, int b)
{
    return a > b ? a : b;
}

// int maxArray(int arr[], int n)
// {
//     if (n == 1)
//         return arr[0];
//     return maxNumber(maxArray(arr, n - 1), arr[n - 1]);
// }

// // Kill recursion
// int maxArray(int arr[], int n) {
//     int max = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(max < arr[i])
//             max = arr[i];
//     }
//     return max;
// }


int maxArray(int arr[], int n) {
    int k = 1;
    int max = arr[0];
    while(k < n) {
        max = maxNumber(max, arr[k]);
        k ++;
    }
    return max;
}

int main()
{
    int arr[] = {9, 1, 3, 9999, 23, 7, 8};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout << maxArray(arr, arr_size) << std::endl;
}
