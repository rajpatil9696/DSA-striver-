// in this question we have to return the number of substrings which contains all the characters a b c
/*
class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int n = s.size();

        for(int i = 0; i < n; ++i){
            vector<int> hash(3, 0);  // reset for each i
            for(int j = i; j < n; ++j){
                hash[s[j] - 'a']++;

                if(hash[0] && hash[1] && hash[2]){
                    count += (n - j);  // all substrings from j to end will be valid
                    break;
                }
            }
        }

        return count;
    }
};

*/
/*
// optimal solution 
class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int lastseen[3] = {-1, -1, -1};
        int n = s.size();

        for (int i = 0; i < n; i++) {
            lastseen[s[i] - 'a'] = i;

            if (lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1) {
                count += 1 + min({lastseen[0], lastseen[1], lastseen[2]});
            }
        }

        return count;
    }
};

*/