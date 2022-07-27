/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=nums.size();
        int sum2=0, sum=0;
        for(int i=0;i<l;i++)
        {
            sum2=sum2+nums[i];
        }
        for(int i=0; i<l;i++)
        {   sum=sum+nums[i];
            if((sum-nums[i])==(sum2-sum))
            {
                return i;
            } 
         }
        return -1;
    }
};
// @lc code=end

