#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n<1600)
    cout<<"3"<<endl;
    else if(n<2000 && n>=1600)
    cout<<"2"<<endl;
    else if(n>=2000)
    cout<<"1"<<endl;
}
return 0;
}