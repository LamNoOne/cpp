#include <iostream>

int numberOfN(long n) {
    if(n < 10)
        return 1;
    return 1 + numberOfN((long)(n / 10));
}

int main() {
    long n = 54374357527;
    std::cout << "The number of n: " << numberOfN(n) << std::endl;
}