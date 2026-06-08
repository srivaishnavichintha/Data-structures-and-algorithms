class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        int n=arr.size();
        vector<int> pse(n,-1),nse(n);
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[i]<arr[st.top()])
                st.pop();
            if(!st.empty()) pse[i]=st.top();
            st.push(i);
        }
        st=stack<int> ();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=arr[st.top()])
                st.pop();
            if(!st.empty()) nse[i]=st.top();
            else nse[i]=n;
            st.push(i);
        }
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            long long count =  1LL*(i-pse[i])*(nse[i]-i);
            sum+=1LL*(arr[i]*count);
        }
        int mod=1e9+7;
        return sum%mod;
    }
};