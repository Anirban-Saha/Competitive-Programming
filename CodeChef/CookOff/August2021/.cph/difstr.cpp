#include<bits/stdc++.h>
using namespace std;
string bn(int n){
    string ans="";
while(n>0){
    if(n&1){
        ans+='1';
    }
    else {
        ans+='0';
    }
    n/=2;
}
reverse(ans.begin(),ans.end());
return ans;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        map<string,int> mp;
        for(int i=0;i<n;i++){
            cin>>str;
            int j=0;
            while(j<n &&str[j]=='0'){
                j++;
            }
            if(j==n){
                continue;
            }
            mp[str.substr(j,n-j)]++;

        }
        string ans="";
        for(int i=1;i<=105;i++){
            string st=bn(i);
            if(mp[st]==0){
                ans=st;
                break;
            }
        }
        for(int i=0;i<n-(int)ans.size();i++){
            cout<<0;
        }
        cout<<ans<<"\n";
    }
}

