class Solution {
public:
    int trap(vector<int>& arr) {
         int rmax=0,lmax=0;
        int res=0;
        vector<int> rarr(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            rmax=max(rmax,arr[i]);
            rarr[i]=rmax;
        }
        for(int i=0;i<arr.size();i++){
            lmax=max(arr[i],lmax);
            int water=min(lmax,rarr[i])-arr[i];
            if(water>0)
            res+=water;
        }
        return res;
    }
};