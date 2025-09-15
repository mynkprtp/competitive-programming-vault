#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    map<ll,ll> mpx,mpy;
    ll x,y;
    vector<pair<ll,ll>> vp;
    for(ll i=0;i<n;i++) {
        cin>>x>>y;
        vp.push_back({x,y});
        mpx[x]++;
        mpy[y]++;
    }
    ll ans=0;
    for(auto p:vp){
        int X=mpx[p.first];
        int Y=mpy[p.second];
        if(X>1 && Y>1){
            ans+=(X-1)*(Y-1);
        }
    }
    cout<<ans<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}