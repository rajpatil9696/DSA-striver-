// ew have to find whether the arrray is sorted and roteted or not 
// if array is sorted and rotated then there exist only one place where arr[i]>arr[i+1] or arr[i]<arr[i+1]
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};

*/