/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector<bool> ans(candies.size());
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi, candies[i]);
            candies[i]=candies[i]+extraCandies;
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=maxi){
                ans[i]=true;
            }else
                ans[i]=false;
        }
        return ans;
    }
};
// @lc code=end

