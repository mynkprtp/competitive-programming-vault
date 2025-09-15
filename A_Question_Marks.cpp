#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(auto i:s) {
        mp[i]++;
    }
    int ans=0;
    ans+=min(n,mp['A']);
    ans+=min(n,mp['B']);
    ans+=min(n,mp['C']);
    ans+=min(n,mp['D']);
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