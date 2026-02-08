/*
class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        vector<int> need(128, 0); // to store frequency of chars in t
        vector<int> window(128, 0); // to store frequency of chars in current window

        for (char c : t) {
            need[c]++;
        }

        int left = 0, right = 0;
        int count = 0; // how many characters matched
        int minLen = INT_MAX;
        int start = 0;

        while (right < s.size()) {
            char c = s[right];
            window[c]++;
            if (need[c] > 0 && window[c] <= need[c]) {
                count++;
            }
            right++;

            while (count == t.size()) {
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                char d = s[left];
                if (need[d] > 0 && window[d] <= need[d]) {
                    count--;
                }
                window[d]--;
                left++;
            }
        }

        if (minLen == INT_MAX) return "";
        return s.substr(start, minLen);
    }
};

*/