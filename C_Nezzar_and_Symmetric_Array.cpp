// WRONG SOLUTION
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    ll a[2*n];
    map<ll,ll> mp;
    for(ll i=0;i<2*n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int f=0;
    for(auto i:mp)
    {
        if(i.first%2!=0 || i.second%2!=0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    cout<<"NO\n";
    else
    cout<<"YES\n";

    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}