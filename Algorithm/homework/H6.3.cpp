#include <bits/stdc++.h>
using namespace std;

int n = 4;    
int k;         
int V[10];      
int W[10];        
int max_value = 0;

void check_sol(int x[]) {
	int currentW = 0;
	int currentV = 0;

    for (int i = 0; i < n; i++) {
        if(x[i] == 1){
        	currentW += V[i];
        	currentV += W[i];
		}
    }
    if (currentW <= k){
    		if(currentV > max_value){
    		max_value = currentV;
		}
	}
}

void subset1(int x[], int l, int r) {
    if (l == r) {
        check_sol(x);
		return; 
    } else {
        x[l] = 0; 
        subset1(x, l + 1, r);

        x[l] = 1; 
        subset1(x, l + 1, r); 
    }
}

int main() {
    if(cin >> k){
    	for(int i = 0 ; i < n; i++){
    		cin >> W[i];
		}
		for(int i = 0 ; i < n; i++){
    		cin >> V[i];
		}
		int x[10];
		
		subset1(x, 0, n);
		cout << max_value << endl;
	}
    
    return 0;
}	
