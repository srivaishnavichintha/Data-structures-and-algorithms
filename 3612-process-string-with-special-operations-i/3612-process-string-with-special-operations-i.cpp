class Solution {
public:
    string processStr(string s) {
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*' && str!="") str.pop_back();
            else if(s[i]=='#') str+=str;
            else if (s[i]=='%') reverse(str.begin(),str.end());
            else if(s[i]>='a' && s[i]<='z') str+=s[i];
        }
        return str;
    }
};