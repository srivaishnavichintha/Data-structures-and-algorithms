class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long maxi=0;
        vector<long long> gn;
        for(int i=0;i<nums.size();i++){
            maxi+=nums[i];
            string s=to_string(nums[i]);
            sort(s.rbegin(),s.rend());
            long long t=stoll(s);
            if(t>nums[i])
                gn.push_back(t-nums[i]);
        }
        sort(gn.rbegin(),gn.rend());
        for(int i=0;i<gn.size() && k>0;i++){
            maxi+=gn[i];
            k--;
        }
        return maxi;
    }
};