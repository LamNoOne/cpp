#include <iostream>

// int fibonacci(int n) {
//     if( n == 1 || n == 2)
//         return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

int fibonacci(int n) {
    int f1 = 1, f2 = 1;
    if(n == 1 || n == 2)
        return 1;
    int i = 3, f;
    while(i <= n) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        i++;
    }
    return f;
}

int findLargestFibonacci(int limit) {
    int n = 1;
    while(fibonacci(n) < limit)
        n++;

    return fibonacci(n - 1);
}

int main() {
    int limit = 15;
    std::cout << findLargestFibonacci(limit) << std::endl;
}