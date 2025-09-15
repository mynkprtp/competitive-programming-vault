#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void dijkstra(vector<vector<vector<int>>>& adj, vector<int>& dist, vector<int>& vis){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        vis[u] = 1;
        for(auto path:adj[u]){
            int v = path[0], len = path[1];
            if(!vis[v] && dist[v]>len+d){
                dist[v] = len + d;
                pq.push({dist[v],v});
            }
        }
    }
    return;
}

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<vector<int>>> adj(n+1);
    int u,v,d;
    for(int i=0;i<m;i++) {
        cin>>u>>v>>d;
        adj[u].push_back({v,d});
        adj[v].push_back({u,d});
    }
    vector<int> dist(n+1,INT_MAX);
    dist[1]=0;
    vector<int> vis(n+1,0);
    vector<int> ans(n+1,0);
    for(int i=0;i<k;i++){
        cin>>v>>d;
        ans[v]=-1;
        adj[1].push_back({v,d});
        adj[v].push_back({1,d});
    }
    dijkstra(adj,dist,vis);
    for(int i=1;i<=n;i++){
        for(auto path:adj[i]){
            int v = path[0];
            int d = path[1];
            if(dist[i]+d==dist[v])
                ans[v]++;
        }
    }
    int sum=0;
    for(auto val: ans){
        sum+=val;
    }
    cout<<sum<<"\n";
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


