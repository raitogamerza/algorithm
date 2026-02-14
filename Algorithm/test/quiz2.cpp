#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	int result;
//  BigO(n)
//	cin >> N ;
//	int x;
//	for (int i = 0 ; i < N ; i++){
//		cin >> x;
//		result ^= x;
//	}
//	cout << result ;

	cin >> N;
	int A[10000];
	
	for(int i = 0l; i < N;i++){
		cin >> A[i];
	}
	
	int left = 0;
	int right = N - 1;
	
	while(left < right){
		int mid = (left + right)/2;
		
		if (mid % 2 == 1){
			mid--;
		}
		if (A[mid] == A[mid+1]){
			left = mid + 2;
		}else {
			right = mid;
		}
	}
	cout << A[left];

	
	return 0;
}
