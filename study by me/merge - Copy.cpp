#include <bits/stdc++.h>
using namespace std;

void merge(int nums[],int left ,int mid,int right){
	int n1 = mid - left +1;
	int n2 = right - mid;
	
	vector<int> L(n1);
	vector<int> R(n2);
	
	for(int i = 0; i < n1 ;i++){
		L[i] = nums[left + i];
	}
	for(int j = 0; j < n2; j++){
		R[j] = nums[mid +1 + j];
	}
	int i =0, j = 0, k = left;
	
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			nums[k] = L[i];
			i++;
		}
		else{
			nums[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		nums[k] = L[i];
		i++;
		k++;
	}
	while(j < n2){
		nums[k] = R[j];
		j++;
		k++;
	}
}

void mergesort(int nums[],int left , int right){
	if(left < right){
		int mid = left + (right - left)/2;
		
		mergesort(nums,left,mid);
		mergesort(nums,mid + 1,right);
		
		merge(nums,left,mid,right);
	}
}

int main(){
	int nums[] = {38, 27, 43, 3, 9, 82, 10};
//	int arr1[] = {1, 3, 5, 7};
//	int arr2[] = {2, 4, 6, 8};
	int n = sizeof(nums) / sizeof(nums[0]);
	
	mergesort(nums,0,n-1);
	
	for(int i = 0; i < n ; i++){
		cout << nums[i] << " ";
	}
}
