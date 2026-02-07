// in this question we have to convert postfix expression to postfix expression 
/*
class Solution {
  public:
    string postToPre(string post_exp) {
        stack<string>ans;
        for(int i=0;i<post_exp.length();i++){
            char ch = post_exp[i];
           // If character is an operand (a-z, A-Z, 0-9)
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                ans.push(string(1, ch)); // Convert char to string
            } 
            else{
                string t1=ans.top();
                ans.pop();
                string t2=ans.top();
                ans.pop();
                string comp=ch+t2+t1;
                ans.push(comp);
            }
        }
        return ans.top();
    }
};

*/