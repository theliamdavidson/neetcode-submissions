class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice {prices[0]};
        int maxProfit {0};
        for( int i{0}; i < prices.size(); i++){
            if(prices[i] < lowestPrice) lowestPrice = prices[i];
            int currentProfit = prices[i] - lowestPrice;
            maxProfit = std::max(maxProfit, currentProfit);
        }
        return maxProfit;
        // iterate through the list
        // check if each day is lower or higher than the current price
        // test each new day for profit. if profit is achived, store that as
    }
};
