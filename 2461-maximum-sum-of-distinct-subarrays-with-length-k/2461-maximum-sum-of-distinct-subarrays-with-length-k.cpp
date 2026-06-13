class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i=0;
        long long sum=0;
        long long maxsum=0;
        for(int j=0;j<nums.size();j++){
             while(mp.count(nums[j] )){
                sum-=nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
              }
              sum+=nums[j];
              mp[nums[j]]++;
              while(mp.size()>k){
                sum-=nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
              }
              if(mp.size()==k)
                maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};