class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0, price = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            price = min(price, prices[i]);
            maxp = max(maxp, prices[i] - price);
        }
        return maxp;
    }
};