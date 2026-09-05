class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         vector<int> pre(nums.size(),0);
        int mini=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
             mini=min(mini,nums[i]);
             pre[i]=mini;
        }
        mini=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=max(mini,nums[i]);
            int temp=abs(mini-pre[i]);
            if(temp<=k)return i;
        }
        return -1;
    }
};