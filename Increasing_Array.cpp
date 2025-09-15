#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    ll ans=0,mx=arr[0];
    for(int i=1;i<n;i++){
        ans+=max(mx-arr[i],0LL);
        mx=max(mx,arr[i]);
    }
    cout<<ans<<"\n";
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