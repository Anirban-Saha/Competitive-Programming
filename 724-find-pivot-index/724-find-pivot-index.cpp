class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //prefix[] stores the prefix sum of nums[]
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