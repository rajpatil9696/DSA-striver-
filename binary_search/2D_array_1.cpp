// in this question we have to find the row in which maximum number of 1 occures 
/*
int lowerBound(vector<int> arr, int n, int x) {
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
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int count_max=0;
    int index=-1;
    for(int i=0;i<n;i++){
       int count_one=m-lowerBound(matrix[i],m,1); 
       if(count_one>count_max){
           count_max=count_one;
           index=i;
       }
    }

    return index;
}
*/