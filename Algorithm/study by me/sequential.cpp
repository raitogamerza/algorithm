#include <bits/stdc++.h>
using namespace std;

int sequential(int num[],int n, int target){
	int i = 0;
	while(i < n){
		
		if (num[i] == target) {
            return i;
        }
        i++;
	}
	return -1;
}

int main(){
	int num[] = {-1, 0, 3, 5, 9, 12};
	int n = sizeof(num)/sizeof(num[0]);
	int target = 9;
	
	cout << sequential(num,n,target);
	return 0;
}
