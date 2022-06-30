class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
              long long ans= INT_MIN;
        long long sum=0;
        for(int account=0; account<accounts.size();account++){
            sum=0;
            for(int money=0; money<accounts[account].size(); money++){
                sum+=accounts[account][money];
            }
            if(ans<sum)
            ans=sum;
        }
        return ans;
    }
};