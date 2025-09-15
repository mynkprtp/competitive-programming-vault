#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<ll> arr(n);
    ll sum=0;
    for(auto &i:arr) {
        cin>>i;
        sum+=i;
    }
    int l=1,r=1e9;
    while(l<=r){
        ll m = l+(r-l)/2;
        ll prod = m*m;
        if(prod==sum){
            cout<<"YES\n";
            return;
        }
        else if(prod<sum)
            l=m+1;
        else
            r=m-1;
    }
    cout<<"NO\n";
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