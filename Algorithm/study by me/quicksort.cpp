#include<bits/stdc++.h>
using namespace std;

int partitionlast(int nums[],int low ,int high){
	int pivot = nums[high];
	int i = low - 1;
	
	for(int j = low ; j < high ; j++){
		if(nums[j] <= pivot){
			i++;
			swap(nums[i],nums[j]);
		}
	}
	swap(nums[i+1],nums[high]);
	return i+1;
}

int partitionfirst(int nums[],int low ,int high){
	int pivot = nums[low];
	int i = low + 1;
	
	for(int j = low + 1; j <= high ;j++){
		if(nums[j] < pivot){
			swap(nums[i],nums[j]);
			i++;
		}
	}
	swap(nums[low],nums[i-1]);
	return i -1;
	
}

int medianofthree(int nums[],int low ,int high){
	int mid = low + (high - low) / 2;
	
	if(nums[low] > nums[mid]){
		swap(nums[low],nums[mid]);
	}
	if(nums[low] > nums[high] ){
		swap(nums[low],nums[high]);
	}
	if(nums[mid] > nums[high]){
		swap(nums[mid],nums[high]);
	}
	swap(nums[mid],nums[high]);
	
	int pivot = nums[high];
	int i = low - 1;
	
	for(int j = low ; j < high ; j++){
		if(nums[j] <= pivot){
			i++;
			swap(nums[i],nums[j]);
		}
	}
	swap(nums[i+1],nums[high]);
	return i+1; 
}

void quicksort(int nums[],int low ,int high){
	if(low < high){
		int pi = partitionlast(nums, low, high);
        quicksort(nums, low, pi - 1);
        quicksort(nums, pi + 1, high); 
	}
}

int quickselect(int nums[],int low ,int high,int k){
	if(low <= high){
		int pi = partitionlast(nums, low, high);
		
		if(pi == k)
            return nums[pi];
        else if(k < pi)
            return quickselect(nums, low, pi - 1, k);
        else
            return quickselect(nums, pi + 1, high, k);
    }

    return -1; 
}


int main(){
	int nums[] = {10, 80, 30, 90, 40, 50, 70};
	int n = sizeof(nums)/sizeof(nums[0]);
	
	quicksort(nums,0,n-1);
	
	for(int i = 0; i < n; i++)
        cout << nums[i] << " ";
	
}
