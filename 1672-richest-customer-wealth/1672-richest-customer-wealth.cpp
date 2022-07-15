class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       long long ans= INT_MIN;
        long long sum=0;
        for(int customer=0; customer<accounts.size();customer++){
            sum=0;
            // for(int money=0; money<accounts[customer].size(); money++){
            //     sum+=accounts[customer][money];
            // }
            sum=accumulate(accounts[customer].begin(), accounts[customer].end(), 0);
            if(ans<sum)
            ans=sum;
        }
        return ans;
    }
};