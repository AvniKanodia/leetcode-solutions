class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int current = 0;
        int r = 1;
        int l = 0;
        while (r != prices.size()) {
            if (prices[l] < prices[r]) {
                current = prices[r] - prices[l];
                profit = max(current, profit);
            } else l = r;

            r++;
        }
        return profit;
    }
};