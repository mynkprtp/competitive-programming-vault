#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,h;
    cin>>n>>h;
    vector<int> arr(n);
    int a=-1,b=-1;
    for(auto &i:arr)  {
        cin>>i;
        if(i>=a){
            b=a;
            a=i;
        }else if(i>b){
            b=i;
        }
    }
    ll l=1,r=1e9;
    while(l<=r){
        ll m = l+(r-l)/2;
        if(m*a+m*b<h)    l=m+1;
        else    r=m-1;
    }
    ll sum = l*a+l*b;
    ll ans = 2*l;
    if(sum-b>=h)
        ans--;
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