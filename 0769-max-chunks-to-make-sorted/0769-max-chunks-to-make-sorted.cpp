class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //  vector<int> prefix(arr.size());
        //  int sum=0,temp=0;
        //  int count=0;
        //  for(int i=0;i<arr.size();i++){
        //     sum += arr[i];
        //     temp += i;
        //     if (sum == temp) {
        //         count++;
        //     }
        //  }
        //  return count;
         stack<int> st;
        for(int i=0;i<arr.size();i++){
            if (st.empty()||arr[i]>= st.top()) {
                st.push(arr[i]);
            }
            else {
                int mx = st.top();
                while (!st.empty() && st.top() > arr[i]) {
                    st.pop();
                }
                st.push(mx);
            }
        }
        return st.size();
    }
};