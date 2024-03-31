class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0, pricesLength = prices.length - 1, buy, sell;


        for (int i = 0; i < prices.length; i++) {
            while (i < pricesLength && prices[i+1] <= prices[i]) {
                i++;
            }
            buy = i;
            while (i < pricesLength && prices[i+1] >= prices[i]) {
                i++;
            }
            sell = i;
            maxProfit += prices[sell] - prices[buy];
        }

        return maxProfit;
    }
}