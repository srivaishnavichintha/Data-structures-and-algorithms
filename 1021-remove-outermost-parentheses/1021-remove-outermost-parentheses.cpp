class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int o=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(o!=0){
                    str.push_back(s[i]);
                }
                o++;
            }
            else{
                c++;
                if(o==c){
                    o=0;
                    c=0;
                }
                else {
                    str.push_back(s[i]);
                }
            }
        }
        return str;

    }
};