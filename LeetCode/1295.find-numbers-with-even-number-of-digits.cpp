/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int findNumbers(vector<int>& nums) {
    //     int count=0;
    //     for( int num: nums)
    //     {
    //         if(even(num)%2==0)
    //         count++;
    //     }
    //     return count;
    // }
    // int even(int num){
    //     if(num<0){
    //         num=num*-1;
    //     }
    //     return (int)(log10(num))+1;
    int count=0;
    for(int num: nums){

        if ((abs((int)log10(num)+1))%2==0)
        count++;
    }
    return count;
    }
};
// @lc code=end

