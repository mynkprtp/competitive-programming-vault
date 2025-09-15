// Shitty solution Atcoder contest
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    double ans=0.0000000;
    for(int i=0;i<n;i++)
    {
        ans+=(a[i]*b[i])/100.0000000;
        // cout<<ans<<"\n";
        if(ans>x)
        {
            cout<<i+1<<"\n";
            break;
        }
    }
    if(ans<=x)
    {
        cout<<"-1\n";
    }
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