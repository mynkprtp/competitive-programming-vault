#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    
    ll l=1,r=min(n,b);
    while(l<=r){
        ll m = l + (r-l)/2;
        if(check(m,a,b))
    }

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