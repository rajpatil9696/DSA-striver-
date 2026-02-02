// in this question we have to find the combination sum of the array in which you can select any number from array for any number of times 
/*
class Solution {
    void findCombination(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& store) {
        if (ind == arr.size()) { // Corrected condition check
            if (target == 0) {
                ans.push_back(store);
            }
            return;
        }
        
        // Pick the element
        if (arr[ind] <= target) {  // Corrected index usage
            store.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ans, store);  // Corrected recursive call
            store.pop_back();
        }
        
        // Skip the element
        findCombination(ind + 1, target, arr, ans, store);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> store;
        findCombination(0, target, candidates, ans, store);  // Corrected variable name
        return ans;
    }
};

*/