class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            string s=to_string(nums[i]);
            s+=to_string(nums[i+1]);
            int t=stoi(s);
            mini=min(t,mini);
        }
        return mini;
    }
};