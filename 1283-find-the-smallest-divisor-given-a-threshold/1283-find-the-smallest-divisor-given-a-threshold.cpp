class Solution {
public:
     long long calcd(vector<int>& nums, int cap){
        long long ans=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
              int div=(nums[i]+cap-1)/cap;
              sum+=div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int ans=0;
        int low=1,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long res=calcd(nums,mid);
            if(res<=threshold){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};