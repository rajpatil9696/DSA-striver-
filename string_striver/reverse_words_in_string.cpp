// in this question we have to reverse the words in the string 
// eg str = the sky is blue ans=blue is sky the 
/*
class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        reverse(s.begin(),s.end());  // it will reverse the complete string 

        for(int i=0 ;i<n ;i++){
            string word="";
            while(i<n&& s[i]!=' '){
                word += s[i];   // it will identify the individual word 
                i++;
            }

            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans += " "+word;
            }
        }

        return ans.substr(1); // it will remove the front empty space 
        
    }
};
*/