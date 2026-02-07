/*
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge; // num -> next greater element
        stack<int> st;

        // Process nums2 to fill the map
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];

            // Pop all smaller elements
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }

            // If stack is empty, no greater element
            nge[num] = st.empty() ? -1 : st.top();

            // Push current element to stack
            st.push(num);
        }

        // Build the answer for nums1 using the map
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nge[num]);
        }

        return result;
    }
};

*/