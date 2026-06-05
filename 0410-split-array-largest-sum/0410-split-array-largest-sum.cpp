class Solution {
public:
    long long calc(vector<int>& nums, int lim){
       long long k=1;
       long long sum=0;
       for(int i=0;i<nums.size();i++){
          if(sum+nums[i]<=lim){
            sum+=nums[i];
          }
          else{
            k++;
            sum=nums[i];
          }       
       }
       return k;
    }
    int splitArray(vector<int>& nums, int k) {
        int ans;
        int maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            sum+=nums[i];
        }
        int low=maxi;
        long long high=sum;
        while(low<=high){
            long long mid= low+(high-low) /2;
            if(calc(nums,mid)>k){
                low=mid+1;
            }
            else{ 
                ans=mid;
                high=mid-1;
            }
        }
        return low;
    }
};