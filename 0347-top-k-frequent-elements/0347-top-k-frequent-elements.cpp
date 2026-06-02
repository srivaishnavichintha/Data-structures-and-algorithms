class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 
        for(int i:nums){
            mp[i]++;
        }

        priority_queue<pair<int,int>> mxhp;

        for(auto const& [num,count]: mp){ 
            mxhp.push({count,num}); 
        }
        vector<int> ans;

        for(int i=1; i<=k; i++){
            auto[count,num] = mxhp.top();
            mxhp.pop();
            ans.push_back(num);

        }
        return ans;


    }
};