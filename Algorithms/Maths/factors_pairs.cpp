#include <iostream>
#include <cmath>

void factor(int n) {
    if (n < 0) {
        std::cout << "Factors of negative numbers are not defined.\n";
        return;
    }

    std::cout << "Factors of " << n << ": ";

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            std::cout << i << " ";
            if (i != n / i) {
                std::cout << n / i << " ";
            }
        }
    }

    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    factor(n);

    return 0;
}