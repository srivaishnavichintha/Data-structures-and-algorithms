class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int rsum=0;
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            if(rsum==sum){
               return i;
            }
            rsum+=nums[i];
        }
        return -1;
    }
};