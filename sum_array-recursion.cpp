/*@LamNoOne*/
#include <iostream>

/*
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

int sumArray(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int *brr = copyArray(arr, brr, 0, (n / 2 - 1));
    int *crr = copyArray(arr, crr, n / 2, n - 1);
    // return sumArray(brr, n / 2) + sumArray(crr, n / 2); haha...
    return sumArray(brr, n / 2) + sumArray(crr, (n - n / 2));
}
*/

int sumArray(int arr[], int l, int r) {
    if(l == r)
        return arr[l];
    int l1 = l, r1 = (l + r) / 2;
    int l2 = (l + r) / 2 + 1, r2 = r;
    return sumArray(arr, l1, r1) + sumArray(arr, l2, r2);
}

int main()
{
    int arr[] = {20, 10, 25, 15, 30, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sumArray(arr, 0, n - 1);
    std::cout << "Result of sum array follow recursive approach: " << result << std::endl;
}