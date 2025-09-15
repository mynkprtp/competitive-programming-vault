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
    ll ans=0;
    bool vis[n+1]={false};
    for(int i=1;i<=n;i++){
        for(int cur=i;cur<=n;cur+=i){
            if(s[cur-1]=='1')
                break;
            if(vis[cur])
                continue;
            ans+=i;
            vis[cur]=true;
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