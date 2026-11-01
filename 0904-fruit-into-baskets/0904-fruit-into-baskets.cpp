class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=0;
        int i=0;
        if(fruits.size()==1 || fruits.size()==2)return fruits.size();
        unordered_map<int,int> mp;
        for(int j=0;j<fruits.size();j++){
            mp[fruits[j]]++;
            while(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0)mp.erase(fruits[i]);
                i++;
            }
            maxi=max(j-i+1,maxi);
        }
        return maxi;
    }
};