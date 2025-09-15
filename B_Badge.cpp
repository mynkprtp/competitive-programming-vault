#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }
    vector<int> vis;
    for(int i=1;i<=n;i++){
        vis.clear();
        vis.resize(n+1,-1);
        int u = i;
        while(vis[u]!=1){
            vis[u]=1;
            u=arr[u];
        }
        cout<<u<<" ";
    }
    cout<<"\n";
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