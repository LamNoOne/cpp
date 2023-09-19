#include <iostream>

// int sumFactorial(int n) {
//     int S = 0;
//     for(int i = 0; i <= n ; i++) {
//         int fac = 1;
//         for(int j = 1; j <= i; j++) {
//             fac *= j;
//         }

//         S += fac;
//     }
//     return S;
// }


// int factorial(int n) {
//     if(n == 0) return 1;
//     return n * factorial(n - 1);
// }

// int sumFactorial(int n) {
//     if(n == 0) return 1;
//     return factorial(n) + sumFactorial(n - 1);
// }

// int tongSoMu(int x, int n) {
//     int S = 0;
//     for(int i = 1; i <= n; i++) {
//         int P = 1;
//         for(int j = 1; j <= i; j ++) {
//             P *= x;
//         }
//         S += P;
//     }
//     return S;
// }


int soMu(int x, int n) {
    if(n == 1) return x;
    return x * soMu(x, n - 1);
}

int tongSoMu(int x, int n) {
    if(n == 1) return x;
    return soMu(x, n) + tongSoMu(x, n - 1);
}


int main() {
    int x = 2;
    int n = 5;
    // std::cout << sumFactorial(n);
    std::cout << tongSoMu(x, n);
}