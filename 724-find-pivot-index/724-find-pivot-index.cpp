class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //prefix[] stores the prefix sum of nums[]
        vector<int> prefix(nums.size());
        int sum2=0;
        int l=nums.size();
        //Prefix sum of nums in prefix: 
        for(int i=0;i<l;i++){
        sum2=sum2+nums[i];
        prefix[i]=sum2;
        }
        //Total stores the total sum of the vector given 
        int total=prefix[l-1];
        for(int i=0; i<l;i++)
        {   
            // If sum till i-th index-the current value is equal to the total - sum till i-th index
            // cout<<prefix[i]-nums[i]<<"<----> "<<total-prefix[i]<<"prefix--->"<<prefix[i]<<endl;
            if((prefix[i]-nums[i])==(total-prefix[i]))
            {
                return i;
            } 
         }
        return -1;
    }
};