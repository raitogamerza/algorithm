#include <bits/stdc++.h>
using namespace std;

//int binarysearch(int nums[],int n,int target){
//	int left = 0;
//	int right = n - 1;
//	
//	while (left <= right){
//		int mid = (left+right)/2;
//		if(nums[mid] == target ){
//			return mid;
//		}
//		if(nums[mid] < target){
//			left = mid +1;
//		}
//		else{
//			right = mid - 1;
//		}
//	}
//	return -1;
//}

//int findfirst(int nums[],int n,int target){
//	int left  = 0;
//	int right = n -1;
//	int first = -1;
//	
//	while(left <= right){
//		int mid = left+(right - left)/2;
//		if(nums[mid] == target){
//			first = mid;
//			right = mid - 1;
//		}
//		if(nums[mid] < target){
//			left = mid + 1;
//		}
//		else{
//			right = mid - 1;
//		}
//	}
//	return first;
//}
//
//int findlast(int nums[],int n,int target){
//	int left = 0;
//	int right = n - 1;
//	int last = -1;
//	
//	while(left <= right){
//		int mid = left+(right - left)/2;
//		if(nums[mid] == target){
//			last = mid;
//			left = mid + 1 ;
//		}
//		if(nums[mid] < target){
//			left = mid + 1;
//		}
//		else{
//			right = mid - 1;
//		}
//	}
//	return last;
//}

int squareroot(int x){
	int left = 0;
	int right = x;
	int ans = 0;
	
	while(left <= right){
		long long mid = left+(right -left)/2;
		
		if (mid*mid <= x){
			ans = mid;
			left = mid + 1;
		}else{
			right = mid -1;
		}
	}
	return ans;
}

int main(){
//	int nums[] = {5, 7, 7, 8, 8, 10};
	int x = 8;
//	int n = sizeof(nums)/sizeof(nums[0]);
//	int target = 8;
	
//	cout << binarysearch(nums,n,target);
//	cout << findfirst(nums,n,target)<< " ";
//	cout << findlast(nums,n,target);
	cout << squareroot(x);
	return 0;
}
