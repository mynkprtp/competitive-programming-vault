#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,s,d;
    cin>>n>>s>>d;
    int f=0;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x<s && y>d)
        f=1;
    }
    if(f==1)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    
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