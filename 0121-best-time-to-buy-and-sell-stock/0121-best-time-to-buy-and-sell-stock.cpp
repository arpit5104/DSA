class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy=prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minbuy=min(minbuy,prices[i]);
            maxProfit = max(maxProfit,prices[i]-minbuy);
        }
        return  maxProfit;
    }
};