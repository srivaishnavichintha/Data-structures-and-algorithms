class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0,counter=0;
        unordered_map<string,int> mp={
            {"0",0},
            {"1",1},
            {"2",2},
            {"3",3},
            {"4",4},
            {"5",5},
            {"6",6}
        };
        for(int i=0;i<events.size();i++){
            if(counter==10) break;
            if(mp.count(events[i])) score+=mp[events[i]];
            else if(events[i]=="W") counter++;
            else score++;
        }
        return {score,counter};
    }
};