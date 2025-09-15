#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[m][n];
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cin>>a[i][j];
        }
    }
    ll ans=0;
    for(ll i=0;i<m;i++){
        sort(a[i],a[i]+n);
        for(ll j=0;j<n;j++){
            ans+=(j)*a[i][j];
            ans-=(n-j-1)*a[i][j];
        }
    }
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