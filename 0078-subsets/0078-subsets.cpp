class Solution {
public:
    vector<vector<int>> result;
    void sset(vector<int> &nums,int i,int n,vector<int> res){
       if(i==n){
         result.push_back(res);
         return;
       }
       res.push_back(nums[i]);
       sset(nums,i+1,n,res);
       res.pop_back();
       sset(nums,i+1,n,res);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sset(nums,0,nums.size(),vector<int> ());
        return result;
    }
};