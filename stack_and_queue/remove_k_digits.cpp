/*
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.length();
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0' > num[i]-'0')){
                st.pop() ; // remove larger element 
                k=k-1;
            }
            st.push(num[i]); // push smaller element 
        }
        // edge cases 
        while(k>0){  // if k is still remaining remove last elements of it 
            st.pop();
            k=k-1;
        }
        if(st.empty()){
            return "0";
        }
        string res="";
        while(!st.empty()){
            res=res+st.top();
            st.pop();
        }
        while(res.size()!=0 && res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res.empty()){
            return "0";
        }

        return res ;
    }
};
*/

// most correct solution 
/*
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char c : num) {
            while (!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }

        // If k digits still need to be removed
        while (k-- > 0 && !st.empty()) {
            st.pop();
        }

        // Build the result string from the stack (in reverse)
        string res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(), res.end());

        // Remove leading zeros now (after reverse)
        int i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }
        res = res.substr(i);

        return res.empty() ? "0" : res;
    }
};

*/