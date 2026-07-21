class Solution {
public:
    int calcdist(int x, int y) {
        return x * x + y * y;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mini;
        for (int i = 0; i < points.size(); i++) {
            int d= calcdist(points[i][0], points[i][1]);
            mini.push({d, i});
        }
        vector<vector<int>> ans;
        for (int i = 0; i < k; i++) {
            int idx = mini.top().second;
            mini.pop();
            ans.push_back(points[idx]);
        }
        return ans;
    }
};