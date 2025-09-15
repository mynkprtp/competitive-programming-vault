#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll count=0;
        map<ll,ll> mp;
        while(n--)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
                i.second--;
                mp[i.first+1]++;
            }
        }
        cout<<mp.size()<<"\n";
    }    
}
