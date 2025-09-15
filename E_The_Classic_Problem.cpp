#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int mod = 1e9+7;

int power(int a, int b){
    if(b==0)
        return 1;
    if(b%2){
        return a*(power(a,b-1))%mod;
    }
    int res = power(a,b/2)%mod;
    return (res*res)%mod;
}

void dijkstra(vector<vector<vector<int>>>& adj, vector<ll>& dist, vector<int>& par,int s, int t){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,s});
    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        if(u==t){
            // cout<<u<<" "<<dist[u]<<" \n";
            break;
        }
        pq.pop();
        for(auto edge:adj[u]){
            int v = edge[0];
            int len = edge[1];
            ll newLen = (dist[u] + (power(2,len))%mod)%mod;
            // cout<<newLen<<" : NewLen \n";
            if(newLen<dist[v]){
                dist[v] = newLen;
                pq.push({dist[v],v});
                par[v]=u;
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
    int u,v,w;
    for(int i=0;i<m;i++) {
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int s,t;
    cin>>s>>t;
    vector<ll> dist(n+1,LLONG_MAX);
    vector<int> par(n+1);
    dist[s]=0;
    dijkstra(adj,dist,par,s,t);
    if(dist[t]==LLONG_MAX)
        cout<<"-1\n";
    else{
        vector<int> path;
        for(int i=t;i!=s;i=par[i]){
            path.push_back(i);
        }
        path.push_back(s);
        reverse(path.begin(),path.end());
        cout<<dist[t]<<"\n";
        cout<<path.size()<<"\n";
        for(auto i:path)
            cout<<i<<" ";
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