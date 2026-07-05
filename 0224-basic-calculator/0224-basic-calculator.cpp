class Solution {
public:
    int calculate(string s) {
        stack<pair<int,int>> st;
        long long res=0,sign=1;
        long long num=0;
        for(char ch:s){
            if(isdigit(ch)){
                 num = num * 10 + (ch - '0');
            }
            else if(ch==' ')continue;
            else if(ch=='('){
                st.push({res,sign});
                res=0;sign=1;
                num=0;
            }
            else if(ch=='+'){
                res+=(num*sign);
                sign=1;
                num=0;
            }
            else if(ch=='-'){
                res+=(num*sign);
                sign=-1;
                num=0;
            }
            else if(ch==')'){
                pair<int, int> tele= st.top();
                int r=tele.first;
                int s=tele.second;
                res += sign * num;
                res  =r+ s*res;
                st.pop();
                num=0;
            }
        }
        res += sign * num;
        return res;

    }
};