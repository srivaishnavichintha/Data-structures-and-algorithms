class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq;
        vector<int> mp(26);
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i] - 'A']++;
        }
        for(auto x : mp){
            if(x) pq.push(x);
        }
        int ans = 0;
        while (!pq.empty()) {
            vector<int> v;
            int cnt = 0;

            for (int i = 0; i <= n && !pq.empty(); i++) {
                auto x = pq.top();
                pq.pop();
                cnt++;
                if (x - 1 > 0) v.push_back(x - 1);
            }

            for (auto x : v) pq.push(x);

            if (pq.empty()) ans += cnt;
            else ans += n + 1;
        }
        return ans;
    }
};