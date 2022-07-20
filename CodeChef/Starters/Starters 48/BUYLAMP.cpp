#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,n,k,x,y;
cin>>t;
while(t--){
    cin>>n>>k>>x>>y;
    int rem= n-k;
    int ans=k*x;
    if(x<y){
        a=x;

    }
    else{
        a=y;
    }
    ans=ans+(rem*a);
    cout<<ans<<endl;
}
return 0;
}