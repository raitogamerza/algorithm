#include<bits/stdc++.h>
using namespace std;

int sum = 0;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void permutation(int X[], int start , int end){
	if(start == end){
		for (int i = 1; i <= end ; i++){
			if((X[i] == 1 && X[i+1] == 2 ) || (X[i] == 2 && X[i+1] == 1)){
				sum++;	
				break; 
			}
		}
		return;
	}
	for (int i = start ; i <= end ; i++){
		swap(&X[start],&X[i]);
		permutation(X,start + 1,end);
		swap(&X[start],&X[i]);
	}
}
int main(){
	int n;
	if (cin >> n) {
        int X[20];
        for (int i = 1; i <= n; i++) {
            X[i] = i;
        }
    sum = 0;
	permutation(X,1,n);
	
	cout << sum << endl;
	
	}
	return 0;
}
