// int this question we have to find the paranthesis is valid or not 
/*
class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       int n=s.size();
       for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            char ch=st.top();
            if((s[i]==')' && ch=='(') || (s[i]==']' && ch=='[') || (s[i]=='}' && ch=='{')){
                return true ;
            }
            return false ;
            st.pop();
        }
       } 
       return false ;
    }
};
*/
// correct solution 
/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Use stack<char>
        
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (st.empty()) return false; // Check if stack is empty before accessing top
                
                char top = st.top();
                if ((ch == ')' && top == '(') || 
                    (ch == ']' && top == '[') || 
                    (ch == '}' && top == '{')) {
                    st.pop(); // Correctly remove matched pairs
                } else {
                    return false; // Mismatch found
                }
            }
        }
        
        return st.empty(); // If stack is empty, the string is valid
    }
};

*/