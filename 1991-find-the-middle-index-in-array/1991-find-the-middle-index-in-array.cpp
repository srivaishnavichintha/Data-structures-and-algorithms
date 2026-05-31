class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int sum=accumulate(nums.begin(),nums.end(),0);
       int lsum=0;
       for(int i=0;i<nums.size();i++){
         sum-=nums[i];
         if(lsum==sum) return i;
          lsum+=nums[i];
       }
       return -1;
    }
};