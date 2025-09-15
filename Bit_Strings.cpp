#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int mod=1e9+7;
ll binExp(ll a, ll b){
    if(b==0)
        return 1LL;
    if(b%2) return a*binExp(a,b/2)*binExp(a,b/2)%mod;
    else return binExp(a,b/2)*binExp(a,b/2)%mod;
}

void solve()
{
    int n;
    cin>>n;
    cout<<binExp(2,n);
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