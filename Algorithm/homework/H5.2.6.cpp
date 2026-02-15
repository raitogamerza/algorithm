#include <iostream>

using namespace std;

long long power10(int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) res *= 10;
    return res;
}

int getLength(long long n) {
    if (n == 0) return 1;
    int len = 0;
    while (n > 0) {
        n /= 10;
        len++;
    }
    return len;
}

int myMax(int a, int b) {
    if (a > b) return a;
    else return b;
}


long long multiply(long long a, long long b, int indentLevel) {

    int lenA = getLength(a);
    int lenB = getLength(b);
    int n = myMax(lenA, lenB);

    
    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "Call Multiply(" << a << ", " << b << ") [n=" << n << "]" << endl;

    
    if (n <= 1) {
        long long res = a * b;
        for(int i=0; i<indentLevel; i++) cout << "    ";
        cout << "-> Base Case Return: " << res << endl;
        return res;
    }

    int half_n = n / 2;
    long long p = power10(half_n); 

    long long a1 = a / p; 
    long long a2 = a % p; 
    long long b1 = b / p;
    long long b2 = b % p;

    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "-> Split (div " << p << "): ";
    cout << "a1=" << a1 << ", a2=" << a2 << " | b1=" << b1 << ", b2=" << b2 << endl;


    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "-> Calculating A..." << endl;
    long long A = multiply(a1, b1, indentLevel + 1);

    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "-> Calculating B..." << endl;
    long long B = multiply(a2, b1, indentLevel + 1);

    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "-> Calculating C..." << endl;
    long long C = multiply(a1, b2, indentLevel + 1);

    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "-> Calculating D..." << endl;
    long long D = multiply(a2, b2, indentLevel + 1);

    long long term1 = A * power10(2 * half_n);
    long long term2 = (B + C) * p;
    long long term3 = D;
    
    long long result = term1 + term2 + term3;

    for(int i=0; i<indentLevel; i++) cout << "    ";
    cout << "=> Combine: Result = " << result << endl;

    return result;
}

int main() {
    long long a = 4568;
    long long b = 3275;

    cout << "--- Start Algorithm ---" << endl;
    long long final_res = multiply(a, b, 0);
    
    cout << "\n----------------------------" << endl;
    cout << "Final Answer: " << final_res << endl;
    cout << "----------------------------" << endl;

    return 0;
}
