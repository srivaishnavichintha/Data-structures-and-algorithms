class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        vector<int> pse(n,-1),nse(n);
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i]<=heights[st.top()])
                st.pop();
            if(!st.empty()) pse[i]=st.top();
            st.push(i);
        }
         st=stack<int> ();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()])
                st.pop();
            if(!st.empty()) nse[i]=st.top();
            else nse[i]=n;
            st.push(i);
        }
        int maxarea=0;
        for(int i=0;i<n;i++){
            int area=heights[i] * (nse[i] - pse[i] - 1);
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};