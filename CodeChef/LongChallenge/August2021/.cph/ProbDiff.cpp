#include <bits/stdc++.h>
using namespace std;
 
 
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<ll, ll> mp;
        ll x;
        for (int i = 0; i < 4; ++i)
        {
            cin >> x;
            mp[x]++;
        }
 
        if (mp.size() <= 1)
        {
            cout << "0" << endl;
        }
        else if (mp.size() == 4 || mp.size() == 3)
        {
            cout << "2" << endl;
        }
        else
        {
            ll h, k;
            auto itr = mp.begin();
            h = itr->second;
            itr++;
            k = itr->second;
 
            if (h == k)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
    }
}