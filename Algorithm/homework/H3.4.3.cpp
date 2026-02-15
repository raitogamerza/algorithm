#include <iostream>
using namespace std;

int myAbs(int x) {
    if (x < 0) return -x;
    return x;
}

void solve4_3() {
    int A[] = {10, 12, 15, 17, 18, 20, 25};
    int n = 7;
    int k = 2;
    int M = 8;
    
    int i = 0;
    while (i < n && A[i] < M) {
        i++;
    }
    
    int left = i - 1;
    int right = i;
    
    cout << "Start -> Left: " << left << ", Right: " << right << endl;
    cout << "Found: ";

    int count = 0;
    while (count < k) {
        if (left < 0) { 
            cout << A[right] << " ";
            right++;
        }
        else if (right >= n) { 
            cout << A[left] << " ";
            left--;
        }
        else {
            int distLeft = myAbs(A[left] - M);
            int distRight = myAbs(A[right] - M);
            
            if (distLeft <= distRight) { 
                cout << A[left] << " ";
                left--;
            } else { 
                cout << A[right] << " ";
                right++;
            }
        }
        count++;
    }
    cout << endl;
    cout << "Final -> Left: " << left << ", Right: " << right << endl;
}

int main() {
    solve4_3();
    return 0;
}
