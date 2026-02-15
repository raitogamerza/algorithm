#include <bits/stdc++.h>
using namespace std;

int quickSelect (int C[], int left,int right ,int k){
	if(left == right){
		return C[left];
	}
	int pivotIndex = left + rand() % (right - left + 1);
    swap(C[pivotIndex], C[right]);
    
	int pivot = C[right];
	int i = left;
	
	for(int j = left; j < right ;j++){
		if(C[j] > pivot){
			swap(C[i],C[j]);
			i++;
		}
	}
	swap (C[i], C[right]);
	if (i == k) return C[i];
	else if (i > k)
        return quickSelect(C, left, i - 1, k);
    else
        return quickSelect(C, i + 1, right, k);
}

int main(){
	int n,k;
	cin >> n >> k;
	srand(time(NULL));
	int C[n];
	for(int i = 0; i < n; i++ ){
		cin >> C[i];
	}
	
	int index = k - 1;
	
	cout << quickSelect(C, 0, n - 1, index);
}
