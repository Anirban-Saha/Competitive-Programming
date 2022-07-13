/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;n--;
        int i=nums1.size()-1;
        while (i>=0){
            if(m<0){
                nums1[i]=nums2[n--];
            }
            else if(n<0){
                nums1[i]=nums1[m--];
            }else{
                if(nums1[m]>nums2[n]){
                    nums1[i]=nums1[m--];
                }
                else{
                    nums1[i]=nums2[n--];
                }
            }
            i--;
        }
    }
};
// @lc code=end

