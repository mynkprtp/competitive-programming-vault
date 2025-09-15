#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll lcm = (x*y)/gcd(x,y);
    ll mx = n/x-n/lcm;
    ll mn = n/y-n/lcm;
    ll ans = (mx*(2*n-mx+1))/2;
    ans-=(mn*(mn+1))/2;
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