#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    int x;
    int ans=0;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(mp.find(x)!=mp.end()){
            ans++;
            mp.erase(x);
        }else{
            mp[x]=1;
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