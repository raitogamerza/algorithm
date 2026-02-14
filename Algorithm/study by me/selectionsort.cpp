#include <bits/stdc++.h>
using namespace std;

//void selectionsort(int nums[],int n){
//	int min;
//	for(int i = 0; i < n-1 ; i++){
//		min = i;
//		for(int j = i+1 ; j < n ;j++){
//			if (nums[j] < nums[min]){
//				min = j;
//			}	
//		}
//		if(min != i){
//		swap(nums[i],nums[min]);
//		}
//	}
//}

//void selectionsort(int nums[],int n,int k){
//	int max;
//	for(int i = 0; i < k ; i++){
//		max = i;
//		for(int j = i+1 ; j < n ;j++){
//			if (nums[j] > nums[max]){
//				max = j;
//			}	
//		}
//		if(max != i) {
//			swap(nums[i],nums[max]);
//		}	
//	}
//}

void selectionsort(string name[],int n){
	int min ;
	for (int i = 0; i < n - 1;i++ ){
		min = i;
		for(int j = i+1 ; j < n; j++){
			if(name[j].length() < name[min].length()){
				min = j;
			}
		}
		if(min != i){
			swap(name[i],name[min]);
		}
	}
}

int main(){
//	int nums[] = {50, 80, 20, 95, 10, 85};
	string name[] = {"Alexander", "Bob", "Catherine", "Dan"};
//	int k = 3;
	int n = sizeof(name)/sizeof(name[0]);
	
//	selectionsort(nums,n);
//	selectionsort(nums,n,k);
	selectionsort(name,n);
	
//	for(int i = 0; i < n ; i++){
//		cout << nums[i]<< " ";
//	}
	for(int i = 0; i < n ; i++){
		cout << name[i]<< " ";
	}
}
