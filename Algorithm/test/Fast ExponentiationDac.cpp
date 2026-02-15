#include <iostream>
using namespace std;

long long fastPower(long long x, int n) {
    if (n == 0) {
        return 1;
    }

    long long halfPower = fastPower(x, n / 2);

    if (n % 2 == 0) {
        return halfPower * halfPower;
    } else {
        return x * halfPower * halfPower;
    }
}

int main() {
    long long base = 2;
    int exponent = 10;

    long long result = fastPower(base, exponent);

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
