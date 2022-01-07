#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    string str;
    cin>>str;
    int time=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0')
        time=time+a;
        else if(str[i]=='1')
        time=time+b;
    }
    cout<<time<<endl;
}
return 0;
}