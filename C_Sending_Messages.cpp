#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll> msgTime(n);
    ll prev=0;
    ll ans=0;
    for(auto &i:msgTime)
        cin>>i;
    for(auto i:msgTime){
        ans+=min((i-prev)*a,b);
        prev=i;
    }
    // cout<<ans<<"\n";
    cout<<(ans<f?"YES\n":"NO\n");
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