class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int num=s[0]-'0';
        for(int i=1;i<s.size();i++){
            int n1=s[i]-'0';
            if(abs(n1-num)>2) return false;
            num=n1;
        }
        return true;
    }
};