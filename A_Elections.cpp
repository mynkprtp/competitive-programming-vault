#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(0,max(b,c)-a+1)<<" "<<max(0,max(a,c)-b+1)<<" "<<max(0,max(a,b)-c+1)<<"\n";

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