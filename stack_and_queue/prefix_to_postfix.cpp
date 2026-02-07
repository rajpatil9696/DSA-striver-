// in this question we have to convert prefix expression to postfix expression 
/*
class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string> ans;
        int n = pre_exp.length();
        
        for (int i = n - 1; i >= 0; i--) {
            char ch = pre_exp[i];
            
            // If operand, push to stack
            if (isalnum(ch)) {
                ans.push(string(1, ch));
            } 
            // If operator
            else {
                string op1 = ans.top(); ans.pop();
                string op2 = ans.top(); ans.pop();
                string temp = op1 + op2 + ch; // Postfix: operand1 operand2 operator
                ans.push(temp);
            }
        }
        
        return ans.top();
    }
};

*/