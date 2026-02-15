#include <iostream>
using namespace std;

int findReverseFactorial(int n) {
    if (n <= 0) return -1;
    
    int i = 1; 
    
    while (n % i == 0) {
        n /= i;
        if (n == 1) {
            return i; 
        }
        i++;
    }
    return -1; 
}

int main() {
    int n;
    cin >> n;
    
    int result = findReverseFactorial(n);
    
    if (result != -1) {
        cout << result << "!" << endl;
    } else {
        cout << "not factorial" << endl;
    }
    
    return 0;
}
