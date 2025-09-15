#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll ans=s/n,rem=s%n;
    if(ans>a)
    {
        rem+=(ans-a)*n;
        ans=a;
    }
    if(ans<=a && rem<=b)
    cout<<"YES\n";
    else
    cout<<"NO\n";

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