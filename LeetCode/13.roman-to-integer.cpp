/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
 int romanToInt(string Y) 
    {
        int sum=0,n=0;
        int bb=0;
        int b=Y.size()-1;
        for (int i=b;~i;i--)
        {
            switch(Y[i]) 
            {
                case 'I': 
                n=1; 
                break;
                case 'V': 
                n=5; 
                break;
                case 'X': 
                n=10; 
                break;
                case 'L': 
                n=50; 
                break;
                case 'C': 
                n=100; 
                break;
                case 'D': 
                n=500; 
                break;
                case 'M': 
                n=1000; 
                break;
            }
            if(4*n<sum)
            {
            sum=sum-n;
            }
            else
            sum=sum+n;

       }
        return sum;
    }

};
// @lc code=end

