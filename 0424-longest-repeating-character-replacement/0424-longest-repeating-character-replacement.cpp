class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int l=0,maxfreq=0,maxlen=0;
        for(int i=0;i<s.length();i++){
            freq[s[i] - 'A']++;
            maxfreq = max(maxfreq, freq[s[i] - 'A']);
            while((i-l+1 - maxfreq) > k){
                freq[s[l] - 'A']--;
                l++;
            }
            maxlen = max(maxlen, i-l+1);
        }
        return maxlen;
    }
};