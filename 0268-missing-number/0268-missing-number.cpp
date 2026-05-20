class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int  n= arr.size();
        long long sn=(1LL * n * (n+1))/2;
        long long  s=0;
        for(int i=0;i<arr.size();i++){
                s+=arr[i];
        }
        
        return sn-s;
    }
};