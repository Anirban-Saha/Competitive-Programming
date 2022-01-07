#include<bits/stdc++.h>
using namespace std;
int main()
{
int query;
cin>>query;
while(query--)
{
    int g1=0,s1=0,p1=0,g2=0,s2=0,p2=0;
    cin>>g1>>s1>>p1>>g2>>s2>>p2;
    if(g1+s1+p1>g2+s2+p2)
    {
        cout<<"1"<<endl;
    }
    else cout<<"2"<<endl;
    }
return 0;
}