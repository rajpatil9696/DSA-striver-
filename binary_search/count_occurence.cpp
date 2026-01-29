// in this question we have to find how many times the given element occures in the array 
// we solve this question using the fist and last occurence 
// total occurence = last-first+1;

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

int count(vector<int>& arr, int n, int x) {
	pair<int,int> ans=firstAndLastPosition(arr,n,x);
	if(ans.first==-1) return 0;
	return ans.second-ans.first+1;
}

*/