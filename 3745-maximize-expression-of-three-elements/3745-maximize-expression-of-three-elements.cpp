class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int mx1 = INT_MIN, mx2 = INT_MIN;
        int mn = INT_MAX;
        for (int x : nums) {
            mn = min(mn, x);
            if (x >= mx1) {
                mx2 = mx1;
                mx1 = x;
            } else if (x > mx2) {
                mx2 = x;
            }
        }
        return mx1 + mx2 - mn;
    }
};