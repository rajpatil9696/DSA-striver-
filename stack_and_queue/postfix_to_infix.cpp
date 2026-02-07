// in this question we have converted the postfix into infex
/*
class Solution {
  public:
    string postToInfix(string exp) {
        stack<string> ans;
        
        for (int i = 0; i < exp.length(); i++) {
            char ch = exp[i];
           // If character is an operand (a-z, A-Z, 0-9)
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                ans.push(string(1, ch)); // Convert char to string
            } 
            else { // If character is an operator
                if (ans.size() < 2) {
                    return "Invalid Expression"; // Error handling for incorrect input
                }
                
                string a1 = ans.top();
                ans.pop();
                string a2 = ans.top();
                ans.pop();
                
                string answer = "(" + a2 + ch + a1 + ")";
                ans.push(answer);
            }
        }
        
        return ans.top();
    }
};
*/