#include <iostream>
#include <stack>

// int numberOfN(long long n) {
//     if(n < 10)
//         return 1;
//     return 1 + numberOfN((long long)(n / 10));
// }

// int numberOfN(long long n) {
//     std::stack <int> Stack;

//     int count =  1;

//     while(n >= 10) {
//         Stack.push(n % 10);
//         n = n / 10;
//     }

//     while(!Stack.empty()) {
//         Stack.pop();
//         count ++;
//     }

//     return count;
// }


int numberOfN(long long n) {
    int count = 1;
    while(n >= 10) {
        n = n / 10;
        count ++;
    }
    return count;
}

int main() {
    long long n = 4357525757577;
    std::cout << "The number of n: " << numberOfN(n) << std::endl;
}