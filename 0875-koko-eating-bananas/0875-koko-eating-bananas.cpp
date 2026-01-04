class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1,high=piles[piles.size()-1];
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalhrs=0;
            for(int i=0;i<piles.size();i++){
                 totalhrs+=ceil((double)piles[i]/mid);
                 if(totalhrs>h) break;
            }
            if(totalhrs<=h) {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};