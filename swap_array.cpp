#include <iostream>

int arr[] = {1, 2, 3, 4, 5, 6};
int count_row = 0;

void swap(int &a, int &b)
{
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
    count_row++;
    std::cout << std::endl;
}

void swapArray(int brr[], int Bool[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (!Bool[i])
        {
            brr[k] = arr[i];
            Bool[i] = 1;
            if (k == n - 1)
                printArray(brr, n);
            else
                swapArray(brr, Bool, n, k + 1);
            Bool[i] = 0;
        }
    }
}

int main()
{
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int *brr = new int[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        brr[i] = arr[i];
    }
    int *Bool = new int[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        Bool[i] = 0;
    }
    swapArray(brr, Bool, arr_size, 0);
    std::cout << count_row << std::endl;
}