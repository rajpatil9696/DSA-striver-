/*
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Sort intervals based on starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            // Get the last interval in the merged list
            vector<int>& last = merged.back();

            // If current interval overlaps with the last one, merge them
            if (intervals[i][0] <= last[1]) {
                last[1] = max(last[1], intervals[i][1]);
            } else {
                // No overlap, add current interval
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};

*/