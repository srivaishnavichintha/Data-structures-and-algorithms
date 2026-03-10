class MyStack {
public:
    deque<int> qu;

    MyStack() {
        
    }
    
    void push(int x) {
        qu.push_back(x);
    }
    
    int pop() {
        if(qu.empty())   return -1;
          int num=qu.back();
          qu.pop_back();
          return num;
      
    }
    
    int top() {
        if(qu.empty())   return -1;
        return qu.back();
    }
    
    bool empty() {
        return   qu.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */