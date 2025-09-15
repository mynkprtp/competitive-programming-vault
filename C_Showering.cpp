#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,s,m;
    cin>>n>>s>>m;
    map<int,int> mp;
    int l,r;
    for(int i=0;i<n;i++) {
        cin>>l>>r;
        mp[l]=r;
    }
    int left=0;
    for(auto [key,val]:mp){
        if(key-left>=s){
            cout<<"YES\n";
            return;
        }else{
            left=val;
        }
    }
    if(m-left>=s)
    cout<<"YES\n";
    else
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