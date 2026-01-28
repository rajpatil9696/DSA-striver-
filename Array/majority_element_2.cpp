/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;
        int n = nums.size();

        // Count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Check which elements appear more than n/3 times
        for (auto it : freq) {
            if (it.second > n / 3) {
                result.push_back(it.first);
            }
        }

        return result;
    }
};

*/
/*
// optimal solution 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 =0 , count2=0;
        int el1=INT_MIN , el2=INT_MIN ;
        int n=nums.size();
        for (int i=0;i<nums.size();i++){
           if (count1==0 && el2!=nums[i])  {
            count1=1;
            el1=nums[i];
           } 
           else if(count2==0 && el1!=nums[i]){
            count2=1;
            el2=nums[i];
           }
           else if (nums[i]==el1) count1++;
           else if (nums[i]==el2) count2++;
           else{
            count1--;
            count2--;
           }
        }
        vector<int> ans ;
        count1=0; count2=0;
        for(int i=0 ;i<nums.size() ;i++){
            if(el1==nums[i]) count1++;
            if(el2==nums[i]) count2++;
        }
         int mini=(int)(n/3)+1;
        if(count1>=mini) ans.push_back(el1);
        if(count2>=mini) ans.push_back(el2); 

        return ans ;
    }
};
*/