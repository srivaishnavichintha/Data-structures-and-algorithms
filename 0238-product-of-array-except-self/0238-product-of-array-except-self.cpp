class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,zproduct=1,z=0;
        for(int i=0;i<nums.size();i++){
             product*=nums[i];
             if(nums[i]==0) {
                z++;
                continue;
             }
             zproduct*=nums[i];
        }
        vector<int> result(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) result[i]=product/nums[i];
            else if(z<2) result[i]=zproduct;
        }
        return result;
    }
};