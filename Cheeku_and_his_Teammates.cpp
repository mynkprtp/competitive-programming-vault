#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const ll N=1e6;
const int ind=1e9;
vector<ll> v(2*N);
vector<ll> ans;

void solve()
{
    ll n;
    cin>>n;
    if(n<=1e9)
    cout<<a[n-1]<<"\n";
    else
    cout<<a1[n%1e9 - 1]<<"\n";
    return;
}

int main()
{
    for(ll i=1;i<=2*N;i++)
    v.push_back(i*i);
    for(ll k=2;k<=2*N;k++){
        
    }
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}