// in this question we have to find the next greater element 
// if the element is not found then check it in circular order 
// at the end if no element is grater than that element then insert -1 inside it 
/*
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge;
        stack<int> st;
        int n = nums.size();

        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }

            if (i < n) {
                if (st.empty()) {
                    nge.push_back(-1);
                } else {
                    nge.push_back(st.top());
                }
            }

            st.push(nums[i % n]);
        }

        reverse(nge.begin(), nge.end()); // Fix: reverse the result

        return nge;
    }
};

*/