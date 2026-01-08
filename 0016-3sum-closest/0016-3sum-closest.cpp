class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0] + nums[1] + nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
           int l=i+1;
           int r=nums.size()-1;
           while(l<r){
               int sum=nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<abs(result-target)){
                    result=sum;
                }
                if(target ==sum) return sum;
                else if (sum > target)   r--;
                else   l++;
           }
        }
        return result;
    }
};