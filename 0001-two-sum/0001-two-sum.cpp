class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++){
            num[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(num.count(diff) && num[diff]!=i)
               return {i,num[diff]};
        }
        return {};
    }
};