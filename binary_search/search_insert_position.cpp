// in this question we have to find the index where shpuld we add the given target should add inside the array without changing the sorted order 
/*
int searchInsert(vector<int>& arr, int x)
{   int n=arr.size();
	int low=0;
	int high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}

	return ans;
}
*/