#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--)
{
    vector<int> arr(10);
    int sum1=0; int sum2=0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if((i+1)%2)
        sum2=sum2+arr[i];
        else
        sum1=sum1+arr[i];
    }
    if(sum1==sum2)
    cout<<0<<endl;
    if(sum1>sum2)
    cout<<2<<endl;
    if(sum1<sum2)
    cout<<1<<endl;
}
return 0;
}