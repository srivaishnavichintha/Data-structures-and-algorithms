class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long div=n/2;
        long long res=s;
        res+=div*m;
        res-=(div-1);
        return res;
    }
};