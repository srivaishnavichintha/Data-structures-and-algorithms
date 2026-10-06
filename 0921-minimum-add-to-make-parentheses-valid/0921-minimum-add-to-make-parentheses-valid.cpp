class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else {
                if(st.empty()) temp++;
                else st.pop();
            }
        }
        return st.size()+temp;
    }
};