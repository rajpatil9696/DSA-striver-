// in this problem we have given the binary array we have to return the number of sub arrays that are equal to given sum k
/*
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == goal) {
                    count++;
                }
            }
        }

        return count;
    }
};

*/
/*
optimal solution 
class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int l = 0, sum = 0, count = 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            count += (r - l + 1);  // ✅ valid subarrays ending at r
        }

        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};

*/