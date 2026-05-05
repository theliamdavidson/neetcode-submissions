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
    }
};
