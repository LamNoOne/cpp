#include <iostream>
#include <stack>

// void numToBinary(int n) {
//     if(n > 1) {
//         numToBinary(n / 2);
//     }
//     std::cout << n % 2;
// }

void numToBinary(int n) {
    std::stack <int> Stack;

    while(n > 1) {
        Stack.push(n % 2);
        n = n /2;
    }

    while(!Stack.empty()) {
        std::cout << Stack.top();
        Stack.pop();
    }
}

int main() {
    int n = 123;
    numToBinary(n);
}
