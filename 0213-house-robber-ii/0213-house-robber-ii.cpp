class Solution {
public:
    int rob(vector<int>& nums) {   
        if (nums.size() == 0)
            return 0;
        if(nums.size()==1)return nums[0];
        int prev1 = 0;
        int prev2 = 0;
        for (int i=0;i<nums.size()-1;i++) {
            int tmp = prev1;
            prev1 = max(prev2 + nums[i], prev1);
            prev2 = tmp;
        }
         int prev3 = 0;
        int prev4 = 0;
         for (int i=1;i<nums.size();i++) {
            int tmp = prev3;
            prev3 = max(prev4 + nums[i], prev3);
            prev4 = tmp;
        }
        return prev1<prev3?prev3:prev1;
    }
};