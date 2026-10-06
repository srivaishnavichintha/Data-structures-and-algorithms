class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(0);
            else {
                if(st.empty()) temp++;
                else st.pop();
            }
        }
        return st.size()+temp;
    }
};