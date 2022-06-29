#include<bits/stdc++.h>
using namespace std;

void display( int row){
    int j,i;
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for(j=i;j>=1;j--)
        {
            cout<<j;
        }

        for(j=2;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return;
    
}
int main(){
    int n;
    cin>>n;
    display(n);
    return 0;
}