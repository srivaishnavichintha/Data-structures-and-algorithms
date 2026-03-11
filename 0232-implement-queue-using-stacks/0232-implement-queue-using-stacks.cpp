class MyQueue {
public:
    stack<int> st1;
    stack<int> st2; 
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);                        
    }
    
    int pop() {
        if(st2.empty()) 
        while(st1.size()>0){
            st2.push(st1.top());
            st1.pop();
        }
        int s=st2.top();
        st2.pop();
        return s;
    }
    
    int peek() {
       if(st2.empty())
       while(st1.size()>0){
            st2.push(st1.top());
            st1.pop();
        }
        int x=st2.top();
        return x;
    }
    
    bool empty() {
        return st2.empty() &&st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */