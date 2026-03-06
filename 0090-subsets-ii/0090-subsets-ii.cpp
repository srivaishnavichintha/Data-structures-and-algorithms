class Solution {
public:
    vector<vector<int>> result;
    void sset(vector<int>& nums, int i, vector<int> res) {
       result.push_back(res);
       for(int j=i;j<nums.size();j++){
        if(j>i && nums[j]==nums[j-1])
          continue;
         res.push_back(nums[j]);
         sset(nums,j+1,res);
         res.pop_back();
       }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        sset(nums, 0,  vector<int>());
        return result;
    }
};