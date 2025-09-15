#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ll find(ll n, ll k){
    ll sum = (n*(n-1))/2 + k*n;
    return sum;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll total=find(n,k);
    ll l=1,r=n;
    ll ans=INT_MAX;
    while(l<=r){
        ll m = l+(r-l)/2;
        ll sum = find(m,k);
        ans=min(abs(total-2*sum),ans);
        if(sum>total/2){
            r=m-1;
        }else{
            l=m+1;
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