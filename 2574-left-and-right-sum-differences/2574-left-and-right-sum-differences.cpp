class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      long long sum=accumulate(nums.begin(),nums.end(),0);
      int lsum=0;
      vector<int> res(nums.size());
      for(int i=0;i<nums.size();i++){
          sum-=nums[i];
          res[i]=abs(lsum-sum);
          lsum+=nums[i];
      }
      return  res;
    }
};