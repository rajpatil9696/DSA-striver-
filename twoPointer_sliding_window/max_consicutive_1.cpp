// in this questio we have to return maxumum length of consicutive 1s 
// k is the value which gives how many zeros you can flip 
/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int maxlen=0 , l=0, r=0 , zeros=0;
       while(r<nums.size()){
        if(nums[r]==0){
            zeros++;
        }
        while(zeros>k){
            if(nums[l]==0){
                zeros--;
            }
            l++;
        }
        if(zeros<=k){
           int len=r-l+1;
           maxlen=max(len,maxlen);
        }
        r++;
       } 

       return maxlen ;
    }
};
*/