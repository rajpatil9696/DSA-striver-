// in this question we have to return max points we can return from the given cards
/*

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0, maxsum = 0;
        int n = cardPoints.size();

        // Start with sum of first k elements
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        maxsum = lsum;

        // Now move from left to right: remove from front, add from end
        for (int i = 1; i <= k; i++) {
            lsum -= cardPoints[k - i];         // Remove from front
            rsum += cardPoints[n - i];         // Add from back
            maxsum = max(maxsum, lsum + rsum); // Update max
        }

        return maxsum;
    }
};

*/