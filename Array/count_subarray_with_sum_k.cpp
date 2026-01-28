// in this problem we have to count number of subarrays thats sum is equal to given k
/*
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        int currSum = 0;
        int count = 0;

        prefixSumCount[0] = 1; // To count subarrays that start from index 0

        for (int num : nums) {
            currSum += num;

            if (prefixSumCount.find(currSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[currSum - k];
            }

            prefixSumCount[currSum]++;
        }

        return count;
    }
};

*/