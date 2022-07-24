/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
              vector<int> prefix(nums.size()), prefix2(nums.size());
        int l=nums.size(); int sum,l;
        prefix[0]=nums[l-1];
        for(int i=1;i<l;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        sum=nums[l-1];
        for(int i=0; i<l;i++)
        {
            if(nums[i]==sum-nums[l-1-i]) {return i+1;} 
         }
        
        return -1;
    }
};
// @lc code=end

