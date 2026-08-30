class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        int count=0;
        unordered_map<int,int> sn;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            if(sn[nums[i]]==1) continue;
            int j=i;
            while(j<nums.size() && nums[i]==nums[j]) j++;
            sn[nums[i]]=1;
            bool ok=true;
            for(int k=j;k<nums.size();k++){
                if(nums[i]==nums[k]){
                    ok=false;
                    break;
                }
            }
            if(ok) count++;
        }
        return count;
    }
};