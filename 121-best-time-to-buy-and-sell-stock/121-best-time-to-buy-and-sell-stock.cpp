class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>min){
                if(profit<(prices[i]-min)){
                    profit=prices[i]-min;
                }
            }
            else if(min>prices[i]){
                min=prices[i];
            }
        }
        return profit;
    }
};