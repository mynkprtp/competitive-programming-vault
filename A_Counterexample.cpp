#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll l,r;
    cin>>l>>r;
    if(l%2==0)
    {
        if(l+2<=r)
        cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
        else
        cout<<"-1\n";
    }
    else
    {
        if(l+3<=r)
        cout<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
        else
        cout<<"-1\n";
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