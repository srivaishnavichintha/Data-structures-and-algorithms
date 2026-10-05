class Solution {
public:
    int scoreOfParentheses(string s) {
        int o=0;
        stack<int> st;
         st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int cur=st.top();
                st.pop();
                if(cur==0) cur=1;
                else cur*=2;
                st.top() += cur;
            }
        }
        return st.top();
    }
};