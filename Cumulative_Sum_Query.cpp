#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    ll a[n],sum[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum[i+1]+=a[i];
        sum[i+1]+=sum[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<sum[r+1]-sum[l]<<"\n";
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