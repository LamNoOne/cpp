#include <iostream>

/*
// 1 + ... + n
int sum(int n) {
    if(n == 1) return 1;
    return n + sum(n - 1);
}

// 1 + ... + ... 1/n
float sum(float n) {
    if(n == 1) return 1;
    return (float)(1 / n) + sum(n - 1);
}
*/

int sum(int n) {
    if(n == 1) return 2;
    return n*(n + 1) + sum(n - 1);
}


int main() {
    int n = 100;
    std::cout << sum(n) << std::endl;
}