#include<bits/stdc++.h>
using namespace std;

int interpolationSearch(int nums[],int n,int target){
	int low = 0;
	int high = n- 1;
	
	while(low <= high && target >= nums[low] && target <= nums[high]){
		if (low == high){
			if (nums[low] == target ) return low;
			return -1;
		}
		int pos = low + (((double)high - low )/	(nums[high] - nums[low]) * (target - nums[low]));
		
		if(nums[pos] == target){
			return pos;
		}
		if(nums[pos] < target){
			low = pos + 1;
		}else {
			high = pos - 1;
		}
	}
	return -1;
}

int main(){
	int nums[] = {1005, 1010, 1015, 1020, 1025, 1030, 1035, 1040};
	int target = 1030;
	int n = sizeof(nums)/sizeof(nums[0]);
	
	cout << interpolationSearch(nums,n,target);
}
