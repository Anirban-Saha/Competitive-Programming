#include <iostream>
using namespace std;
int main() {
int i, j,k=0,n=0;
string s; char c; cin>>s;
j = s.length();
for(i=0;i<j;i++){
if(j%2==0)
cout<<j/2;
else
cout<<0;
return 0;
}
}