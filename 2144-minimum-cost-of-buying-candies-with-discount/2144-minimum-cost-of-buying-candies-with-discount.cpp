class Solution {
public:
    int minimumCost(vector<int>& cost) {
       if(cost.size()<=2) return accumulate(cost.begin(),cost.end(),0);
       int  minicost=0; 
       sort(cost.begin(),cost.end());
       int j=cost.size()-1;
       while(j>1){
          minicost+=(cost[j]+cost[j-1]);
          j--,j--;
          if(j>=0) j--;
       }
       for(int i=0;i<=j;i++) minicost+=cost[i];
       return minicost;
    }
};