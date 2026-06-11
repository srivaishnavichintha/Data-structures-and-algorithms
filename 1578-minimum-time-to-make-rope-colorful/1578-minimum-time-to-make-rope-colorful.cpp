class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum=neededTime[0];
        int maxi=neededTime[0];
        int count=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i-1]==colors[i]){
               sum+=neededTime[i];
                maxi=max(neededTime[i],maxi);
            }
            else{
               count+=(sum-maxi);
               sum=neededTime[i];maxi=neededTime[i];
            }
        }
        sum-=maxi;
        count+=sum;
        return count;
    }
};