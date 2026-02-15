#include<bits/stdc++.h>
using namespace std;

//void insertionSort(int nums[],int n){
//	for (int i = 0; i < n ; i++){
//		int key = nums[i];
//		int j = i -1;
//		
//		while(j >= 0 && nums[j] > key){
//			swap(nums[j],nums[j+1]);
//			j = j - 1;
//		}
//	}
//}

void insertionSort(int nums[],int n,int &count){
	for (int i = 0; i < n ; i++){
		int key = nums[i];
		int j = i -1;
		
		while(j >= 0 && nums[j] > key){
			count++;
			swap(nums[j],nums[j+1]);
			j = j - 1;
		}
	}
}

void insertInOrder(int nums[], int &n ,int newvalue){
	nums[n] = newvalue;
	int i = n -1;
	
	while(i >= 0 && nums[i] > newvalue){
		nums[i + 1] = nums[i];
		i--;	
	}
	nums[i+1] = newvalue;
	n++;
}



int main(){
	int nums[] = {10, 20, 30, 40};
	int newvalue;
	cin >> newvalue;
	int n = sizeof(nums)/sizeof(nums[0]);
	int count = 0;
	
//	insertionSort(nums,n);
//	insertionSort(nums,n,count);
	insertInOrder(nums,n,newvalue);
	
	for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
//    cout << count;
}
