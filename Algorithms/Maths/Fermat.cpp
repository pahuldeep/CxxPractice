#include <iostream>
using namespace std;

typedef long long int ll;

ll modularExponentiation(ll base, ll exponent, ll modulus) {
    ll result = 1;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent >>= 1;
    }
    return result;
}

ll modularInverse(ll number, ll modulus) {
    return modularExponentiation(number, modulus - 2, modulus);
}

int main() {
    int base, exponent;
    cin >> base >> exponent;
    cout << modularExponentiation(base, exponent, 1000000007) << endl;
    cout << modularInverse(base, 1000000007) << endl;
}
