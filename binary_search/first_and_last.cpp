// in this question we have to find the first and last occurence of the element inside the array 
/*
int firstOccurence(vector<int>& arr,int size , int key){
    int start=0;
    int end = size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid] <key ){
            start=mid+1;

        }
        if(arr[mid]>key){
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return ans;
}
int lastOccurence(vector<int>& arr ,int size , int key){
    int start=0;
    int end = size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(arr[mid] <key ){
            start=mid+1;

        }
        if(arr[mid]>key){
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstOccurence(arr,n,k);
    p.second=lastOccurence(arr,n,k);

    return p;

}

*/