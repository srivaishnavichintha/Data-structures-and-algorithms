class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions,vector<int>& diff) {
        vector<long long> max_a(n, LLONG_MAX);
        max_a[0] = 0;
        for (auto& r : restrictions) {
            max_a[r[0]] = min(max_a[r[0]], (long long)r[1]);
        }
        for (int i = 0; i < n - 1; i++) {
            max_a[i + 1] = min(max_a[i + 1], max_a[i] + diff[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            max_a[i] = min(max_a[i], max_a[i + 1] + diff[i]);
        }

        long long result = 0;
        for (long long val : max_a)
            result = max(result, val);
        return (int)result;
    }
};