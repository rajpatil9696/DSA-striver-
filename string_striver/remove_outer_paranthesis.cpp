// in this question we have to remove the outer most paranthesis of the strin 
/*
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";  // This will store the final answer
        int count = 0;       // This keeps track of how deep we are inside the parentheses

        for (char c : s) {
            if (c == '(') {
                // If count is more than 0, it's not the outermost '(', so add it
                if (count > 0) {
                    result += c;
                }
                count++; // Go one level deeper
            } else { // c == ')'
                count--; // Coming one level back
                // If count is still more than 0, it's not the outermost ')', so add it
                if (count > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};

*/