class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //prefix[] stores the prefix sum of nums[]
        int l=nums.size();
        int sum2=0, sum=0;
        sum2=accumulate(nums.begin(), nums.end(), 0);
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