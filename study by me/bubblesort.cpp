#include <bits/stdc++.h>
using namespace std;

void bubblesort(int nums[],int n,int &count){
	for(int i = 0 ; i < n-1; i++){
		for(int j = 0; j < n - 1- i;j++){
			if(nums[j] < nums[j+1]){
				count++;
				swap(nums[j],nums[j+1]);
			}
		}
	}
}



int main(){
	int nums[] = {5, 1, 4, 2, 8};
	int n = sizeof(nums)/sizeof(nums[0]);
	int count = 0;
	bubblesort(nums,n,count);
	
	for(int i = 0; i < n ; i++){
		cout << nums[i]<< " ";
	}
	cout << endl;
	cout << count;
}
