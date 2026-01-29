/*
void merge(vector<int> &arr, int low , int mid , int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    // copy all the elements from the temp ary to the original array 
    for(int i=low ;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void ms(vector<int> &arr , int low,int high){
    if(low==high) return; // base case 
    int mid=(low+high)/2;
    ms(arr,low,mid);  // left part 
    ms(arr,mid+1,high); // right part 
    merge(arr,low,mid,high);

}

void mergeSort(vector < int > & arr, int n) {
    ms(arr,0,n-1);
    
}

*/