class Solution {
public:
    bool checkIfPangram(string sentence) {
   bool f[26] = {};
for(int i = 0;i<sentence.size();i++)
f[sentence[i]-'a']=true;
for(int i=0;i<26;i++){
if(f[i]==false)
return false;
}
return true;
}

};