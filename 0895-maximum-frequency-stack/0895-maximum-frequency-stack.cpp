class FreqStack {
public:
    // vector<int> st;
    unordered_map<int,stack<int>> st;
    unordered_map<int,int> freq;
    int maxfreq;
    FreqStack() {
         maxfreq = 0;
    }
    
    void push(int val) {
        freq[val]++;
        int f=freq[val];
        st[f].push(val);
        maxfreq=max(maxfreq,f);
    }
    
    int pop() {
        if(st[maxfreq].empty()) maxfreq--;
        int x=st[maxfreq].top();
        st[maxfreq].pop();
        freq[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */