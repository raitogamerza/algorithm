#include <iostream>
using namespace std;

int myAbs(int x) {
    if (x < 0) return -x;
    return x;
}

int myBinarySearch(int arr[], int n, int M) {
    int low = 0;
    int high = n - 1;
    int ans = n; 

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] >= M) {
            ans = mid;      
            high = mid - 1; 
        } else {
            low = mid + 1;  
        }
    }
    return ans;
}

void solve4_4() {
    int A[] = {10, 12, 15, 17, 18, 20, 25};
    int n = 7;
    int k = 2;
    int M = 8;

    int i = myBinarySearch(A, n, M);
    
    int left = i - 1;
    int right = i;
    
    cout << "Start (from Binary Search) -> Left: " << left << ", Right: " << right << endl;
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
}

int main() {
    solve4_4();
    return 0;
}
