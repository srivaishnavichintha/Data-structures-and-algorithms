class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans,freqp(26,0),freqs(26,0);
        if(p.size()>s.size())
            return ans;
        for(char c:p)
            freqp[c-'a']++;
        int l=0,r=0,cnt=0,flag;
        while(r<s.size()){
            flag=0;
            if(cnt<=p.size()-1){
                freqs[s[r]-'a']++;
                r++;
                cnt++;
            }
            else if(cnt>p.size()-1){
                cnt--;
                for(int i=0;i<26;i++){
                    if(freqs[i]!=freqp[i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    ans.push_back(l);
                freqs[s[l]-'a']--;
                    l++;
            }
        }
        flag=0;
    for(int i=0;i<26;i++){
        if(freqs[i]!=freqp[i]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        ans.push_back(l);
    return ans;
    }
};