class CustomStack {
public:
    vector<int> inc;
    stack<int> st;
    int maxi;
    CustomStack(int maxSize) {
       for(int i=0;i<maxSize;i++){
          inc.push_back(0);
       }
       maxi=maxSize;
    }
    
    void push(int x) {
        if(st.size()<maxi)
          st.push(x);
    }
    int pop() {
        if(st.empty()) return -1;
        int ele=st.top();
        if(st.size()==1){
              ele += inc[0];
              inc[0] = 0;
              st.pop();
              return ele;
        }
        ele+=inc[st.size()-1];
        inc[st.size()-2]+=inc[st.size()-1];
        inc[st.size()-1]=0;
        st.pop();
        return ele;
    }
    
    void increment(int k, int val) {
        if(st.empty()) return;
        int idx = min(k, (int)st.size()) - 1;
        inc[idx] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */