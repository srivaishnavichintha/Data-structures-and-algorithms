class Solution {
public:
    int minimumCost(vector<int>& cost) {
       if(cost.size()<=2) return accumulate(cost.begin(),cost.end(),0);
       int  minicost=0; 
       sort(cost.begin(),cost.end());
        for(int i=cost.size()-1; i>=0; i=i-3){
            if(i-1>=0) minicost += cost[i] + cost[i-1];
            else minicost += cost[i];
        }
       return minicost;
    }
};