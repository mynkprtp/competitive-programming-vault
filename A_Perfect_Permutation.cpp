#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    if(n&1)
    cout<<-1<<"\n";
    else
    {
        for(int i=1;i<=n;i+=2)
        cout<<i+1<<" "<<i<<" ";
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