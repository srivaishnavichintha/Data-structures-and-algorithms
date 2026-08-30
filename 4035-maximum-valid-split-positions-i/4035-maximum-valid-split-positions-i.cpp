class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=-1;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
               if(i!=j)
                   temp.push_back(nums[j]);
            }
            int scr=0,gc=0;
            if(temp.size()<2) continue;
             vector<int> suff(temp.size());
            for(int j=temp.size()-1;j>=0;j--){
                gc=gcd(gc,temp[j]);
                suff[j]=gc;
            }
            int pref=0;
            for(int j=0;j<temp.size()-1;j++){
                pref=gcd(pref,temp[j]);
                scr+=(pref==suff[j+1]);
            }
            res=max(res,scr);
        }
        return res;
    }
};