#include <iostream>

// int gcd(int a, int b) {
//     if(a == 0 || b == 0)
//         return a + b;
//     while(a != b) {
//         if(a > b)
//             a -= b;
//         else 
//             b -= a;
//     }
//     return a;
// }

// int gcd(int a, int b) {
//     while(a*b != 0) {
//         if(a > b)
//             a %= b;
//         else
//             b %= a;
//     }
//     return a + b;
// }

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a = 12;
    int b = 20;

    std::cout << gcd(a, b) << std::endl;
}