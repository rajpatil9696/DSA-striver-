/*
class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCount = 0;  // count of the most frequent character in the current window
        int maxLength = 0;
        int left = 0;
        vector<int> freq(26, 0);  // frequency array for characters A-Z

        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'A']++;
            maxCount = max(maxCount, freq[s[right] - 'A']);

            // If more than k characters need to be replaced, shrink the window
            while ((right - left + 1) - maxCount > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

*/