class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;  
        
        int best_buy = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            best_buy = min(best_buy, prices[i]);
            max_profit = max(max_profit, prices[i] - best_buy);
        }

        return max_profit;
    }
};
