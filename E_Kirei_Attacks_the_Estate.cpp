#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    vector<ll> adj[n+1];
    vector<ll> cost(n+1,0ll),ans(n+1,0ll);
    vector<ll> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    ll u, v;
    for(ll i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<pair<ll,ll>> q;
    q.push(make_pair(1,-1));
    cost[1]=arr[0];
    ans[1] = arr[0];
    while(!q.empty()){
        ll s = q.size();
        for(ll i = 0;i<s;i++){
            pair<ll,ll> cur = q.front();
            q.pop();
            ll u  =cur.first, p = cur.second;
            for(ll v:adj[u]){
                if(v!=p){
                    ll x = arr[v-1]-cost[u];
                    ll y = arr[v-1]-ans[u];
                    cost[v]=min({x,y,arr[v-1]});
                    ans[v]=max(x,max(y,arr[v-1]));
                    // cout<<cost[v]<<" "<<ans[v]<<"...\n";
                    q.push(make_pair(v,u));                    
                }
            }
        }
    } 
    for(ll i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
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