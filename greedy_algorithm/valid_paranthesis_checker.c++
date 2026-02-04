/*
class Solution {
    bool func(string s , int ind, int count){
        int n=s.size();
        if(count<0){
            return false ;
        }
        if(ind==n){
            return (count==0);
        }

        if(s[ind]=='('){
            return func(s,ind+1,count+1);
        }
        else if (s[ind]==')'){
            return func(s,ind+1,count-1);
        }
        else{
            return (func(s,ind+1,count+1) || func(s,ind+1,count-1) ||  func(s,ind+1,count) );
        }
    }
public:
    bool checkValidString(string s) {
     int n =s.size();
     int ind=0;
     int count=0;

     return func(s,ind,count);
    }
};
*/
/*
//optimal solution 
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for (char ch : s) {
            if (ch == '(') {
                low++;
                high++;
            } else if (ch == ')') {
                low--;
                high--;
            } else { // '*'
                low--;      // '*' as ')'
                high++;     // '*' as '('
            }
            if (high < 0) return false; // Too many ')'
            if (low < 0) low = 0;       // can't be negative
        }
        return low == 0;
    }
};

*/