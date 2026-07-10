class Twitter {
public:
    Twitter() {
        
    }
    deque<pair<int,int>> dq;
    unordered_map<int,unordered_set<int>> mp;
    void postTweet(int userId, int tweetId) {
        dq.push_front({userId,tweetId});
        
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        for (auto &it : dq) {
            if (it.first == userId || mp[userId].count(it.first)) {
                res.push_back(it.second);
                if (res.size() == 10) break;
            }
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        mp[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        mp[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */