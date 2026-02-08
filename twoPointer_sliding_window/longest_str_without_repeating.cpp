// in this question we have to return the length of longest sub string without repeating character 
/*
// brute force 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;

        for (int i = 0; i < s.size(); i++) {
            vector<bool> count(256, false);  // Reset for each starting point i

            for (int j = i; j < s.size(); j++) {
                if (count[s[j]]) {
                    break;  // Duplicate character found
                }
                count[s[j]] = true;  // Mark character as seen
                int len = j - i + 1;
                maxlen = max(maxlen, len);
            }
        }

        return maxlen;
    }
};
*/
/*
// optimized approach 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> seen(256, false); // Track characters in current window
        int left = 0, right = 0, maxLen = 0;

        while (right < s.size()) {
            if (!seen[s[right]]) {
                seen[s[right]] = true;
                maxLen = max(maxLen, right - left + 1);
                right++;
            } else {
                seen[s[left]] = false;
                left++;
            }
        }

        return maxLen;
    }
};
*/