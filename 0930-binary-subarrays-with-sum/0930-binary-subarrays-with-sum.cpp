class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        int sum=0,t=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.count(sum-goal))
              t+=mp[sum-goal];
            mp[sum]++;
        }
        return t;
    }
};