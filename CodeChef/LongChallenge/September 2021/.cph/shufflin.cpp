#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,odd=0,even=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
        if(x%2==1)
        odd=odd+1;
        if(x%2==0)
        even=even+1;
    }
    cout<< min(even, (n+1)/2)+ min(odd,n/2)<<endl;
    }    
return 0;
}
