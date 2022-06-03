#include <iostream>
using namespace std;
int main() { string s; cin>>s;
if(s.length()%2==0)
cout<<s.length()/2;
else
cout<<0;
return 0;}