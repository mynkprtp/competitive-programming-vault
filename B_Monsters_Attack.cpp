#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll> mp;
    vector<int> arr(n),x(n);
    for(auto &i:arr) {
        cin>>i;
    }
    for(auto &i:x) {
        cin>>i;
    }
    for(int i=0;i<n;i++){
        mp[abs(x[i])]+=arr[i];
    }
    long long sum=0,power=0;
    for(auto [key,val]:mp){
        sum=key*k;
        power+=val;
        if(power>sum){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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