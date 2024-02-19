class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int n = height.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && height[i] > height[st.top()]) {
                int rightIdx = st.top();
                st.pop();

                if (st.empty())
                    break;

                int leftIdx = st.top();
                int length = min(height[i], height[leftIdx]) - height[rightIdx];
                int breadth = i - leftIdx - 1;
                sum += length * breadth;
            }
            st.push(i);
        }
        return sum;
    }
};