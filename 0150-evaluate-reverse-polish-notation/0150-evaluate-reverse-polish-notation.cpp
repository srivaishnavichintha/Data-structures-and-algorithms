class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st; 
        for(int i=0;i<tokens.size();i++){
             if(tokens[i]=="+"|| tokens[i]=="-"|| tokens[i]=="*"|| tokens[i]=="/" ){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int sum;
                if(tokens[i]=="+") sum=t2+t1;
                if(tokens[i]=="-") sum=t2-t1;
                if(tokens[i]=="*") sum=t2*t1;
                if(tokens[i]=="/") sum=t2/t1;
                st.push(sum);
             }
             else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};