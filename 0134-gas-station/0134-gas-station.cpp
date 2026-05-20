class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ind = 0, tank = 0,tt=0;
        int n = gas.size();
        for(int i = 0; i < n; i++) {
            tank += gas[i] - cost[i];
            tt += gas[i] - cost[i];
            if(tank < 0) {
                tank = 0;
                ind = i + 1;
            }
        }
        if(tt<0) return -1;
        return ind;
        
    }
};