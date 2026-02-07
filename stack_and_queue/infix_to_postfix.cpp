// in this question we have to find postfix solution of the infix 
/*
class Solution {
int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string& s) {
        stack<char> st;
        string ans ;
        for(int i=0; i<s.length();i++){
            char ch=s[i];
            
            // insert the operands 
            if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
                ans+=ch;
            }
            else if(ch=='('){
                st.push(ch);    
            }
            else if(ch==')'){
                while(st.top()!='('){
                    ans+=st.top();
                    st.pop(); // pop elements till  ( comes 
                }
                st.pop() ;// pop the (
            }
            else{
        while (!st.empty() && prec(s[i]) <= prec(st.top())) {
        ans += st.top();
        st.pop();
                 }
        st.push(ch);
            }
        }
    while (!st.empty()) {
    ans += st.top();
    st.pop();
  }
    return ans ;
    }
};
*/