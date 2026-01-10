class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> pos;
        int len=0,maxlen=0;
        int l=0,r=0;
        while(r!=s.length()){
            if(pos.count(s[r])){
               l=max(pos[s[r]]+1,l);
            }
            pos[s[r]]=r;
            len=r-l+1;
            maxlen=max(len,maxlen);
            r++;
        }
        return maxlen;
    }
};