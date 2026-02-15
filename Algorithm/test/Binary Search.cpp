#include <iostream>
using namespace std;

// ?????????? "??????????" (First Occurrence)
int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int first = -1; 
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            first = mid;     
            high = mid - 1;   
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int last = -1; 
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            last = mid;    
            low = mid + 1;  
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int arr[] = {2, 5, 5, 5, 5, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int firstIndex = findFirst(arr, n, target);
    int lastIndex = findLast(arr, n, target);

    if (firstIndex != -1) {
        int width = lastIndex - firstIndex + 1;
        cout << "Target " << target << " found." << endl;
        cout << "First Occurrence: Index " << firstIndex << endl;
        cout << "Last Occurrence: Index " << lastIndex << endl;
        cout << "Width of Target: " << width << " elements" << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
