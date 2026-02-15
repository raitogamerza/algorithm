#include <iostream>
using namespace std;

bool shouldSwap(int a, int b) {
    bool isAEven = (a % 2 == 0);
    bool isBEven = (b % 2 == 0);

    if (isAEven && !isBEven) return false; 
    if (!isAEven && isBEven) return true; 

    if (isAEven && isBEven) {
        return a > b; 
    }

    return a < b; 
}

void customBubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (shouldSwap(arr[j], arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
            
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 4, 7, 6, 1, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted: ";
    printArray(arr, n);

    customBubbleSort(arr, n);

    cout << "Custom Sorted (Evens asc, Odds desc): ";
    printArray(arr, n);

    return 0;
}
