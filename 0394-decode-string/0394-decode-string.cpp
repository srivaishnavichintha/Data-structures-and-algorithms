class Solution {
public:
    string decodeString(string s) {
        stack<pair<int , string>> st;
        int cur=0;
        string str="";
        for(char ch:s){
             if(isdigit(ch)){
                cur = cur * 10 + (ch - '0');
             }
             else if(ch=='['){
                st.push({cur,str});
                cur=0;
                str="";
             }
             else if(ch==']'){
                 pair<int,string> temp=st.top();
                 int c=temp.first;
                 string sr=temp.second;
                 string ans;
                 for (int i = 0;i<c;i++)
                    ans += str;
                 str = sr + ans;
                 st.pop();
             }
             else {
                str+=ch;
             }
        }
        return str;
    }
};