class Solution {
public:
    bool calcbloom(vector<int>& bloomDay, int day,int m,int k) {
        int cnt = 0;
        int boq = 0;
        for(int i=0;i<bloomDay.size();i++){
           if(bloomDay[i] <= day) cnt++;
           else cnt = 0;
           if (cnt == k){
              boq++;
              cnt = 0;
           }
        }
        return boq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(bloomDay[i], mini);
            maxi = max(bloomDay[i], maxi);
        }
        int ans=-1;
        int low = mini, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(calcbloom(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};