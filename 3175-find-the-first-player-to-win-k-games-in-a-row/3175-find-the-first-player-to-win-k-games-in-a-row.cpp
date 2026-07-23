class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        if(k>skills.size()){
            int maxi=INT_MIN;
            for(int i=0;i<skills.size();i++){
                maxi=max(skills[i],maxi);
            }
            for(int i=0;i<skills.size();i++){
                if(skills[i]==maxi) return i;
            }
        }
        int win = 0;
        int cnt = 0;
        for (int i = 1; i < skills.size(); i++) {
            if (skills[win] > skills[i]) {
                cnt++;
            } else {
                win = i;
                cnt = 1;
            }
            if (cnt == k)
                return win;
        }
        return win;
    }
};