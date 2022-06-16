class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        if(nums.size() > set<int>(nums.begin(), nums.end()).size())
            return true;
        else
            return false;
    }
};