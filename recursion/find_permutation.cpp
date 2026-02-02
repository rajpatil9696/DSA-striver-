// in this question we have to find all the permutation of the array 
/*
class Solution {
    void findPermutation(vector<int>& arr, int ind, vector<vector<int>>& ans) {
    if(ind == arr.size()) {
        ans.push_back(arr); // Store the current permutation
         return;
    }
    for (int i = ind; i < arr.size(); i++) {
        swap(arr[ind], arr[i]); // Swap to generate a new permutation
        findPermutation(arr, ind + 1, ans); // Recur for the next index
        swap(arr[ind], arr[i]); // Backtrack to restore the original array
    }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        findPermutation(nums, 0, ans);
        return ans;
    }
};
*/