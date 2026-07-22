class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> start,end;
        for(int i=0;i<flowers.size();i++){
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        vector<int> res(people.size());
        for(int i=0;i<people.size();i++){
           auto it=upper_bound(start.begin(),start.end(),people[i])- start.begin();
           auto ti=lower_bound(end.begin(),end.end(),people[i]) - end.begin();
           res[i]=(it-ti);
        }
        return res;
    }
};