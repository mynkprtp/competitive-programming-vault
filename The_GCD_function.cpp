#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ll hcf(ll a, ll b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
} 
ll findlcm(ll a,ll b)
{
    if (b == 1)
        return a; 
    a = (a * b) / hcf(a, b); 
    b -= 1; 
    return findlcm(a, b);
}
void solve()
{
    ll x;
    cin>>x;
    if(x<3)
    cout<<(x*(x+1))/2<<" "<<x<<"\n";
    else
    {
        ll ans=findlcm(x,x-1);
        cout<<(x*(x+1))/2<<" "<<ans<<"\n";
    }
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