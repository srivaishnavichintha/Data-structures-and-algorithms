class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int freq1=0,freq2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') freq1++;
            else freq2++;
        }
        return abs(freq1-freq2);
    }
};