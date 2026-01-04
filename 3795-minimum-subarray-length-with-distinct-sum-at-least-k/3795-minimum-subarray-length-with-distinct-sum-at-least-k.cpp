class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        int l = 0;
        long long sum = 0; 
        int m = INT_MAX;

        for (int r = 0; r < nums.size(); r++) {
            if (seen[nums[r]] == 0) {
                sum += nums[r];
            }
            seen[nums[r]]++;
            while (sum >= k) {
                m = min(m, r - l + 1);
                seen[nums[l]]--;
                if (seen[nums[l]] == 0) {
                    sum -= nums[l];
                }
                l++;
            }
        }
        return (m == INT_MAX) ? -1 : m;
    }
};