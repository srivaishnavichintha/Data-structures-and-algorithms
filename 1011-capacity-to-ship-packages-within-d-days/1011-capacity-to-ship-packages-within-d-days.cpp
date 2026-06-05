class Solution {
public:
    long long calcd(vector<int>& weights, int cap){
        long long ans=1;
        long long sum=0;
        for(int i=0;i<weights.size();i++){
           if(sum+weights[i]>cap){
              ans++;
              sum=weights[i];
           }
           else sum+=weights[i];
        }
        return ans;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<weights.size();i++){
            maxi=max(weights[i],maxi);
            sum+=weights[i];
        }

        int low=maxi,high=sum;
        while(low<=high){
            int mid=low+(high-low) /2;
            long long ans=calcd(weights,mid);
            if(ans<=days){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};