#include <bits/stdc++.h>
using namespace std;

int n = 4;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

bool n_queen(int x[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(x[i] - x[j]) == abs(i - j))
                return false;
        }
    }
    return true;
}

void permute(int x[], int start, int end) {
    if (start == end) {
        if (n_queen(x)) {
            for (int i = 0; i < n; i++)
                cout << x[i] << " ";
            cout << endl;
        }
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(x[start], x[i]);
        permute(x, start + 1, end);
        swap(x[start], x[i]);
    }
}

int main() {
    int x[n] = {1, 2, 3,4}; 

    permute(x, 0, n - 1); 

    return 0;
}
