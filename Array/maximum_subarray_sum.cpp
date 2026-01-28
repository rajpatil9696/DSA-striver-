// in this question we have to find the maximun sum which we will gwt from a sub array 
/*
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum=0 , maxi=LONG_MIN;
    for(int i=0 ;i<n ;i++){
        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    if(maxi<0){ // if no positive number is present at the array then it will print sum as 0 ;
       return 0; 
    }
    return maxi;
}
*/