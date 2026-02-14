#include <iostream>
using namespace std;

int n;
char books[30];    
char solution[30]; 
bool used[30];      

void sortBooks() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                char temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void permute(int step) {
    if (step == n) {
        for (int i = 0; i < n; i++) {
            cout << solution[i]; 
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;            
            solution[step] = books[i];  
            
            permute(step + 1);       
            
            used[i] = false;   
        }
    }
}

int main() {
    if (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> books[i];
        }

        sortBooks();

        for (int i = 0; i < n; i++) used[i] = false;

        permute(0);
    }
    return 0;
}
