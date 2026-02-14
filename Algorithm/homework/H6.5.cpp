#include <iostream>
using namespace std;

int arr[50];    
int n = 0;        
int target;        
int min_count = 2000000000; 

void subset1(int index, int current_sum, int count) {
    if (current_sum == target) {

        if (count < min_count) {
            min_count = count;
        }
        return;
    }
    if (current_sum > target || index == n || count >= min_count) {
        return;
    }
    subset1(index + 1, current_sum, count);
    
    subset1(index, current_sum + arr[index], count + 1);
}

int main() {
    if (cin >> target) {
        while (true) {
            cin >> arr[n];
            n++;
            
            char c = cin.get();
            if (c == '\n') break;
        }

        subset1(0, 0, 0);

        if (min_count == 2000000000) {
        } else {
            cout << min_count << endl;
        }
    }
    return 0;
}
