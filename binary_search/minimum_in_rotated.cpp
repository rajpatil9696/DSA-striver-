// in this question we have to find the minimun element from the rotated array 
/*
int findMin(vector<int>& arr)
{
	int low=0;
	int high=arr.size()-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		// left sorted 
		if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else{
			high=mid-1;
			ans=min(ans,arr[mid]);
		}

	}

	return ans ;
}
*/