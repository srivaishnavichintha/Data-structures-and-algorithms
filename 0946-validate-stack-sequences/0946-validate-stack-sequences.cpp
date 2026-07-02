class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        vector<bool> visited(1001, 0);
        stack<int> st;
        vector<int> ans;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                st.push(pushed[i]);
                visited[pushed[i]] = 1;
            }
            if (j < n && !st.empty() && st.top() != popped[i]) {
                while (j < n && visited[popped[i]] != 1) {
                    st.push(pushed[j]);
                    visited[pushed[j]] = 1;
                    j++;
                }
            }
            if (!st.empty()) {
                ans.push_back(st.top());
                st.pop();
            }
        }
        if (popped != ans)
            return false;
        return true;
    }
};