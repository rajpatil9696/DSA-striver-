/*
// max nesting depth ==how deep brackets go inside each other 
class Solution {
public:
    int maxDepth(string s) {
       int depth=0;
       int maxDepth=0;
       int n=s.length();
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            depth=depth+1;
            maxDepth=max(depth,maxDepth);
        }
        else if (s[i]==')'){
            depth=depth-1;
        }
       } 
       return maxDepth;
    }
};

*/