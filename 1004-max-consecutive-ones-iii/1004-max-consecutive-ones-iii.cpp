class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int zero=0;
        int maxi=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0) zero++;
           while(zero>k){
              if(nums[i]==0) zero--;
              i++;
           }
           maxi=max(j-i+1,maxi);
        }
        return maxi;
    }
};