class Solution {
public:
     void dfs(vector<vector<int>>& res, vector<int>& seq, vector<int>& nums, int ps) {
        if(seq.size() > 1) res.push_back(seq);
        unordered_set<int> mp;
        for(int i = ps; i < nums.size(); ++i) {
            if((seq.empty() || nums[i] >= seq.back()) && mp.find(nums[i]) == mp.end()) {
                seq.push_back(nums[i]);
                dfs(res, seq, nums, i + 1);
                seq.pop_back();
                mp.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> seq;
        dfs(res, seq, nums, 0);
        return res;
    }
};