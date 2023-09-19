#include <iostream>

// float caculate(int a, int n)
// {
//     if (n == 0)
//         return 1;
//     if (n < 0)
//         return (float)(1 / caculate(a, -n));
//     return a * (float)caculate(a, n - 1);
// }

float caculate(int a, int n)
{
    float P = 1;
    if (n == 0)
        return P;
    int length = n > 0 ? n : -n;
    for(int i = 1; i <= length; i++) {
        P *= a;
    } 

    if(n > 0)
        return P;
    return (float)(1 / P);
}

int main()
{
    int a = 3;
    int n = -4;
    std::cout << caculate(a, n) << std::endl;
}