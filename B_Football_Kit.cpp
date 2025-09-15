#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v1(n),v2(n);
    map<ll,ll> mp1,mp2;
    for(ll i=0;i<n;i++)
    {
        cin>>v1[i]>>v2[i];
        mp1[v1[i]]++;
        mp2[v2[i]]++;
    }   
    for(ll i=0;i<n;i++)
    {
        ll c1=0,c2=0;
        c1=n-1;
        if(mp1[v2[i]]>0)
        {
            c1+=mp1[v2[i]];
            c2+=n-mp1[v2[i]]-1;
        }
        else
        {
            c2+=n-1;
        }
        cout<<c1<<" "<<c2<<"\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}