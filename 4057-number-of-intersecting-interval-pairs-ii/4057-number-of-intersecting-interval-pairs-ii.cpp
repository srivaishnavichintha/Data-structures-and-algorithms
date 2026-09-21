class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
         int n = intervals.size();
        vector<int> st, ed;
        for(auto &x : intervals) {
            st.push_back(x[0]);
            ed.push_back(x[1]);
        }
        sort(st.begin(), st.end());
        sort(ed.begin(), ed.end());
        long long non = 0;
        int j = 0;
        for(int i = 0;i<n;i++) {
            while(j<n&&ed[j]<st[i])
                j++;
            non += j;
        }
        long long ttl = 1LL*n*(n-1)/2;
        return ttl-non;
    }
};