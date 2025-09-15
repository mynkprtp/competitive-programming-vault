#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    ll a=x/k + (x%k?1:0);
    ll b=y/k + (y%k?1:0);
    ll ans=min(a,b);
    a-=ans;
    b-=ans;
    ans*=2;
    if(a!=0){
        ans+=2*a-1;
    }else if(b!=0){
        ans+=2*b;
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