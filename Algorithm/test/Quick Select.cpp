#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k_index) {
    if (low <= high) {
        int pi = partition(arr, low, high); 

        if (pi == k_index) {
            return arr[pi];
        }
        
        if (pi > k_index) {
            return quickSelect(arr, low, pi - 1, k_index);
        }
        return quickSelect(arr, pi + 1, high, k_index);
    }
    return -1;
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2; 
    
    int target_index = n - k; 
    
    int result = quickSelect(arr, 0, n - 1, target_index);
    cout << "The " << k << "nd largest element is: " << result << endl;
    
    return 0;
}
