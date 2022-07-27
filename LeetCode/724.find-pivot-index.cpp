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
        vector<int> prefix;
        int sum2=0;
        for(int i=0;i<l;i++){
        sum2=sum2+nums[i];
        prefix.push_back(sum2);
        }
        int total=prefix[l-1];
        for(int i=0; i<l;i++)
        {   
            if((prefix[i]-nums[i])==(total-prefix[i]))
            {
                return i;
            } 
         }
        return -1;
    }
};
// @lc code=end

