/*
class Solution {
  public:
    string preToInfix(string pre_exp) {
        stack<string> st;

        for (int i = pre_exp.length() - 1; i >= 0; i--) {
            char ch = pre_exp[i];

            // If operand, push as a string
            if (isalnum(ch)) {
                st.push(string(1, ch));
            } else {
                // Operator: pop two operands and form the expression
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string expr = "(" + op1 + ch + op2 + ")";
                st.push(expr);
            }
        }

        // The result is the only element in the stack
        return st.top();
    }
};

*/