class Solution {
public:
    long long beautifulSubarrays(vector<int>& arr) {
         unordered_map<int ,int> mp;
        int xr=0;
        mp[0]=1;
        long long cnt=0;
        for(int i=0;i<arr.size();i++){
            xr^=arr[i];
            if(mp.count(xr))
               cnt+=mp[xr];
            mp[xr]++;
        }
        return cnt;
    }
};