class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int  n= grid.size()*grid[0].size();
        long long sn=(1LL * n * (n+1))/2;
        long long s2n= (1ll * n * (n+1) *(2*n+1))/6;
        long long  s=0, s2=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                s+=grid[i][j];
                s2+=(long long)grid[i][j] * (long long)grid[i][j];
            }
        }
        long long v1=s-sn;
        long long v2=s2-s2n;
        v2=v2/v1;
        long long x= (v1+v2)/2;
        long long y=x-v1;
        return {(int)x,(int)y};
        
    }
};