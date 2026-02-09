class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {
        
    }
    
    void push(int val) {
        long long x=val;
        if(st.empty()) {
           st.push(x);
           mini=x;
        }
        
        else{
            if(x<mini){
                st.push((2*x)-mini);
                mini=x;
            }
            else st.push(x);
        }
    }
    void pop() {
        if(st.empty()) return;
         long long x=st.top();
         st.pop();
         if(x<mini)
           mini=2*mini - x;
        
    }
    
    int top() {
        if(st.empty()) return 0;
        else{
            if(st.top()<mini)
              return mini;
            else
             return st.top();
        }
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */