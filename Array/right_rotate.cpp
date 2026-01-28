/*
void reverse(vector<int> &arr, int start , int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int d=k%nums.size();
    int n=nums.size();
    reverse(nums,0,((n-d)-1));
    reverse(nums,n-d,n-1);
    reverse(nums,0,n-1);
    }
};
*/