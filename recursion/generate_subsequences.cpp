/*
class Solution {
    void generatesubsequences(vector<int>& nums, vector<int>& sub, int index, vector<vector<int>>& ans){
        if(index==nums.size()){
            ans.push_back(sub);
            return ;
        }
        // push in the sub array 
        sub.push_back(nums[index]);
        generatesubsequences(nums,sub,index+1,ans);
        // pop from the sub  array 
        sub.pop_back();
        generatesubsequences(nums,sub,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub ;
        generatesubsequences(nums,sub,0,ans);
        return ans ;
    }
};
*/