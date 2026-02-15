#include<bits/stdc++.h>
using namespace std;

void findClosestElements(int arr[], int n, int k, int x, int result[]) {
    int left = 0;
    int right = n - k;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (x - arr[mid] > arr[mid + k] - x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    for (int i = 0; i < k; i++) {
        result[i] = arr[left + i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 4;
    int x = 3;

    int result[100]; 

    findClosestElements(arr, n, k, x, result);

    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    
    for(int i = 0; i < n; i++){
    	cout << nums[i] << " ";
	}

    return 0;
}

