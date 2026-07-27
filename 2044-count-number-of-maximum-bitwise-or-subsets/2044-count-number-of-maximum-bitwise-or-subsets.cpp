class Solution {
public:
    int count=0;
    int maxi=0;
    void maxsubsets(vector<int>& nums,int i, int bitti){
       if (bitti == maxi) {
            count += (1 << (nums.size() - i));
            return;
        }
        if (i == nums.size()) return;
        maxsubsets(nums,i+1,bitti|nums[i]);
        maxsubsets(nums,i+1,bitti);
    }
    int countMaxOrSubsets(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
          maxi=maxi|nums[i];
       } 
       maxsubsets(nums,0,0);
       return count;
    }
};