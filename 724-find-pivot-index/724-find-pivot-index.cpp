class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //prefix[] stores the prefix sum of nums[]
        vector<int> prefix;
        int sum2=0;
        int l=nums.size();
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