class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        if(prices.size()==1) return 0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
           int  sell=prices[i];
            if(buy>sell)
               buy=sell;
            else{
                if(profit<sell-buy)
                   profit=sell-buy;
            }
        }
        return profit;
    }
};