#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void djikstra(vector<vector<vector<int>>>& adj, vector<int>& dist, vector<int>& vis, vector<int>& par){
    par[1]=-1;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        vis[u]=1;
        pq.pop();
        for(auto vp: adj[u]){
            int v = vp[0];
            int w = vp[1];
            if(!vis[v] && d+w<dist[v]){
                dist[v] = d+w;
                par[v]=u;
                pq.push({dist[v],v});
            }
        }
    }
    return;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<vector<int>>> adj(n+1);
    int x,y,d;
    for(int i=0;i<m;i++){
        cin>>x>>y>>d;
        adj[x].push_back({y,d});
        adj[y].push_back({x,d});
    }
    vector<int> dist(n+1,INT_MAX);
    vector<int> vis(n+1,0);
    vector<int> par(n+1);
    dist[1]=0;
    djikstra(adj,dist,vis,par);
    if(dist[n]==INT_MAX){
        cout<<"-1";
    }else{
        vector<int> path;
        for(int t=n;t!=1;t=par[t]){
            path.push_back(t);
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        for(auto i:path){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
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