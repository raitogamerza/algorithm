#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long gcdDivideAndConquer(long long arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    }

    int mid = left + (right - left) / 2;

    long long gcdLeft = gcdDivideAndConquer(arr, left, mid);
    long long gcdRight = gcdDivideAndConquer(arr, mid + 1, right);

    return gcd(gcdLeft, gcdRight);
}

long long lcmDivideAndConquer(long long arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    }

    int mid = left + (right - left) / 2;

    long long lcmLeft = lcmDivideAndConquer(arr, left, mid);
    long long lcmRight = lcmDivideAndConquer(arr, mid + 1, right);

    return lcm(lcmLeft, lcmRight);
}

int main() {
    long long arr[] = {12, 18, 24, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long resultGCD = gcdDivideAndConquer(arr, 0, n - 1);
    cout << "GCD is: " << resultGCD << endl;

    long long resultLCM = lcmDivideAndConquer(arr, 0, n - 1);
    cout << "LCM is: " << resultLCM << endl;

    return 0;
}
