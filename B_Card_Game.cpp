#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if((a>c && b>=d) || (a>=c && b>d))
        ans+=2;
    if((a>d && b>=c) || (a>=d && b>c))
        ans+=2;
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