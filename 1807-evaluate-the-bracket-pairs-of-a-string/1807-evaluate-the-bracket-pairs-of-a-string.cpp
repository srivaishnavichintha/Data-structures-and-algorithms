class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string res="";
        unordered_map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        int temp=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                i++;
                string str="";
                while(s[i]!=')'){
                    str+=s[i];
                    i++;
                }
                if(mp.count(str))
                    res+=mp[str];
                else
                    res+='?';
            }
            else{
                res+=s[i];
            }
            i++;
        }
        return res;
    }
};