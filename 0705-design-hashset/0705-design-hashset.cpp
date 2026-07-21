class MyHashSet {
public:
    MyHashSet() {
        
    }
    unordered_set<int> hashst;
    void add(int key) {
        hashst.insert(key);
    }
    
    void remove(int key) {
        hashst.erase(key);
    }
    
    bool contains(int key) {
        return hashst.contains(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */