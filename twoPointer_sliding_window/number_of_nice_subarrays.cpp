/*
class Solution {
public:
    // Helper function to count subarrays with at most k odd numbers
    int atMost(vector<int>& nums, int k) {
        int left = 0, count = 0, oddCount = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 == 1) {
                oddCount++;  // count odd numbers
            }

            // Shrink window if there are more than k odd numbers
            while (oddCount > k) {
                if (nums[left] % 2 == 1) {
                    oddCount--;
                }
                left++;
            }

            // Number of subarrays ending at right and starting from left to right
            count += (right - left + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};

*/