class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int buy=prices[0];
        int sell;
        for(int a : prices){
            sell=a;
            max_profit=max(max_profit,sell-buy);
            buy=min(buy,a);
        }
        if(max_profit<0) return 0;
        else return max_profit;
    }
};