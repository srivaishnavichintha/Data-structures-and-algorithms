class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,minlen=INT_MAX;
        // unordered_map<int,int> mp;
        int l=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                minlen=min(minlen,i-l+1);
                sum-=nums[l];
                l++;
            }
        }
        return minlen==INT_MAX ? 0 : minlen;
    }
};