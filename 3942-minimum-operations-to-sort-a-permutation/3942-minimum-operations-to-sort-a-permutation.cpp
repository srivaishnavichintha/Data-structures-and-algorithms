class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        bool as = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) { as = false; break; }
        }
        if (as) return 0;
        int res = INT_MAX;
        int ps = -1;
        for (int j = 0; j < n; j++) {
            if (nums[j] == 0) { ps = j; break; }
        }
        int k = ps;
        bool vld = true;
        for (int j = 0; j < n; j++) {
            if (nums[j] != (j - k + n) % n) { vld = false; break; }
        }
        if (vld)
            res = min(res, min(k, 2 + (n - k) % n));
        k = (n - 1 - ps + n) % n;
        vld = true;
        for (int i = 0; i < n; i++) {
            int idx = (n - 1 - (k + i) % n + n) % n;
            if (nums[idx] != i) { vld = false; break; }
        }
        if (vld) {
            int ct = min(1 + k, 1 + (n - k) % n);
            res = min(res, ct);
        }
        return res == INT_MAX ? -1 : res;
    }
};