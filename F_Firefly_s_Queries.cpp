#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,q;
    cin>>n>>q;
    // vector<ll> arr(n);
    // for(auto &i:arr) {
    //     cin>>i;
    // }
    vector<ll> a(n*n,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        for(ll k=1;k<n;k++){
            ll temp = n*k-1+(i-k+n)%n+1;
            a[temp]=a[i];
        }
    }
    vector<ll> pref(n*n+1,0);
    pref[0]=0;
    for(ll i=1;i<=n*n;i++){
        pref[i]+=pref[i-1]+a[i-1];
    }
    // for(ll i=0;i<n*n;i++)  cout<<a[i]<<" : "<<pref[i]<<" , ";
    // cout<<"\n";
    while(q--){
        ll l, r;
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<"\n";
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