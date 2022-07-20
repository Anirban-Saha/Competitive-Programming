class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int x; int c=0;
        if(ruleKey=="type"){x=0;}
        if(ruleKey=="color"){x=1;}
        if(ruleKey=="name"){x=2;}
        for(auto item: items)
        {if(item[x]==ruleValue){c++;}}
        return c;
        }
};