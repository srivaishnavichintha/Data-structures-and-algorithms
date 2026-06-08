class Solution {
public:
     int largearea(vector<int>& heights) {
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> pre(matrix[0].size());
         int larea=0;
        for(int j=0;j<matrix[0].size();j++)
           pre[j] = matrix[0][j] - '0';
        larea=largearea(pre);

        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1')
                    pre[j]+=1;
                else pre[j]=0;
            }
            int area=largearea(pre);
            larea=max(larea,area);
        }
        return larea;
    }

};