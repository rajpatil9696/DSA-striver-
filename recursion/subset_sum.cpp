// in this question we have to print sum of all possible subsets in ascending order
/*
class Solution {
    void subsetsumFinder(int ind ,vector<int>&arr,int n,vector<int>&ans,int sum){
        if(ind==n){
            ans.push_back(sum);
            return ;
        }
      //element is picked
      subsetsumFinder(ind + 1, arr, n, ans, sum + arr[ind]);
      //element is not picked
      subsetsumFinder(ind + 1, arr, n, ans, sum);

    }
  public:
    vector<int> subsetSums(vector<int>& arr) {
        vector<int>ans ;
        int n=arr.size();
        subsetsumFinder(0,arr,n,ans,0);
        sort(ans.begin(),ans.end());
        return ans ;
    }
};
*/