class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        //[7] [1] [5] [3] [6] [4]
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice, prices[i]);
            maxProfit=max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    }
};