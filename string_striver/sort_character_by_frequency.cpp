// in this problem we have to rearrange the characters according to frequency 
/*
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Create buckets where index is frequency
        int n = s.size();
        vector<vector<char>> buckets(n + 1);  // from freq 1 to n

        for (auto& it : freq) {
            buckets[it.second].push_back(it.first);
        }

        // Step 3: Build result string from buckets (high freq to low)
        string result = "";
        for (int i = n; i > 0; --i) {
            for (char c : buckets[i]) {
                result += string(i, c);  // append char 'i' times
            }
        }

        return result;
    }
};

*/