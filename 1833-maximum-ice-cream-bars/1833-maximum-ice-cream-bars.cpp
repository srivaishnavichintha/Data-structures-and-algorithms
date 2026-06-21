class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        int cns=coins;
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=cns){
                cns-=costs[i];
                count++;
            }
            else break;
        }
        return count;
    }
};