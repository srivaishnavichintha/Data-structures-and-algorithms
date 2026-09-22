class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> res(k,0);
        vector<vector<long long>> dp(nums.size(),vector<long long>(k,0));
        vector<long long> prefix(nums.size()+1,1),suffix(nums.size()+1,1);
        dp[0][nums[0] % k] = 1;
        res[nums[0] % k]++;
        for(int i = 1; i < nums.size(); i++) {
            dp[i][nums[i] % k]++;
            for(int r = 0; r < k; r++) {
                int nr = (r * (nums[i] % k)) % k;
                dp[i][nr] += dp[i - 1][r];
            }
            for(int r = 0; r < k; r++) {
                res[r] += dp[i][r];
            }
        }
        return res;
    }
};