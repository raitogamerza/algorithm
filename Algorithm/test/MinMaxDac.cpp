#include <iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int left, int right) {
    Pair result, leftPair, rightPair;

    if (left == right) {
        result.min = arr[left];
        result.max = arr[left];
        return result;
    }

    if (right == left + 1) {
        if (arr[left] < arr[right]) {
            result.min = arr[left];
            result.max = arr[right];
        } else {
            result.min = arr[right];
            result.max = arr[left];
        }
        return result;
    }

    int mid = left + (right - left) / 2;

    leftPair = getMinMax(arr, left, mid);
    rightPair = getMinMax(arr, mid + 1, right);

    result.min = (leftPair.min < rightPair.min) ? leftPair.min : rightPair.min;
    result.max = (leftPair.max > rightPair.max) ? leftPair.max : rightPair.max;

    return result;
}

int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, 0, n - 1);

    cout << "Minimum element is: " << minmax.min << endl;
    cout << "Maximum element is: " << minmax.max << endl;

    return 0;
}
