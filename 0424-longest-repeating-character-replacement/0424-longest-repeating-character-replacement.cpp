class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0,maxlen=0,maxfreq=INT_MIN;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            maxfreq = max(maxfreq, mp[s[i]]);
            while((i-l+1)-maxfreq>k){
                 mp[s[l]]--;
                 if(mp[s[l]]==0) mp.erase(s[l]);
                 l++;
            }
            maxlen=max(maxlen,i-l+1);
        }
        return maxlen;
    }
};