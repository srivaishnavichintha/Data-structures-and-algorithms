class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int div=((sum % k) + k) % k;
            if(mp.count(div)) count+=mp[div];
            mp[div]++;
        }
        return count;
    }
};