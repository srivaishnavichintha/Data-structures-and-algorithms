class Solution {
public:
    int reverseDegree(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            int temp=s[i]-'a';
            res+=(i+1)*(26-temp);
        }
        return res;
    }
};