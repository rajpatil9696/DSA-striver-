/*
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        //counting frequency for each character
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                lower[s[i]-'a']++;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                upper[s[i]-'A']++;
            }
        }
        int count=0;
        bool odd=0;

        for(int i=0;i<26;i++){
          // lower 
          if(lower[i]%2==0){
            count+=lower[i];
          }  
          else{
            odd=1;
            count+=lower[i]-1;
          }
           // upper
          if(upper[i]%2==0){
            count+=upper[i];
          }  
          else{
            odd=1;
            count+=upper[i]-1;
          }
        }

        return count+odd;

    }
};
*/