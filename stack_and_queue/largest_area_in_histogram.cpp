/*
class Solution {
vector<int> findPreviousSmallerIndices(const vector<int>& heights) {
    int n = heights.size();
    vector<int> prev(n, -1);
    stack<int> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        if (!st.empty()) {
            prev[i] = st.top();
        }
        st.push(i);
    }
    return prev;
}
vector<int> findNextSmallerIndices(const vector<int>& heights) {
    int n = heights.size();
    vector<int> next(n, n);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        if (!st.empty()) {
            next[i] = st.top();
        }
        st.push(i);
    }
    return next;
}
public:
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> prev = findPreviousSmallerIndices(heights);
    vector<int> next = findNextSmallerIndices(heights);

    int maxArea = 0;
    for (int i = 0; i < n; ++i) {
        int width = next[i] - prev[i] - 1;
        int area = heights[i] * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
    }
};
*/