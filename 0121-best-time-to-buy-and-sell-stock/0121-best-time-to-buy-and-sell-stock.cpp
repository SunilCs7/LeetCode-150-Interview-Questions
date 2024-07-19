class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;  // Edge case: if prices is empty

        int buy_price = prices[0];  // Initial buying price
        int profit = 0;  // Initial profit

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy_price) {
                buy_price = prices[i];  // Update the buying price if current price is lower
            } else {
                int current_profit = prices[i] - buy_price;  // Calculate current profit
                profit = max(profit, current_profit);  // Update the maximum profit
            }
        }

        return profit;
    }
};