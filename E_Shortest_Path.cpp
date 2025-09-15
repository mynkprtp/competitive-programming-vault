#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

pair<int,int> ans;

void dijkstra(vector<vector<int>>& adj, vector<vector<int>>& par, set<vector<int>>& st){
    queue<pair<int,int>> pq;
    pq.push({1,1});
    while(!pq.empty()){
        int u = pq.front().first;
        int v = pq.front().second;
        pq.pop();
        if(v==adj.size()-1){
             ans={u,v};
             break;
        }
        for(auto k:adj[v]){
            if(!par[v][k] && (st.find({u,v,k})==st.end())){
                par[v][k]  = u;
                pq.push({v,k});
            }
        }
    }
    return;
}

void solve()
{
    ans = {-1,-1};
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> adj(n+1);
    int x,y;
    for(int i=0;i<m;i++) {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    set<vector<int>> st;
    for(int i=0;i<k;i++){
        int x,y,z;
        cin>>x>>y>>z;
        st.insert({x,y,z});
    }
    vector<vector<int>> par(n+1,vector<int>(n+1,0));
    dijkstra(adj,par,st);
    if(ans.first==-1){
        cout<<"-1\n";
    }else{
        vector<int> path;
        while(ans.second!=1){
            path.push_back(ans.second);
            ans = {par[ans.first][ans.second],ans.first}; 
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        cout<<path.size()-1<<"\n";
        for(auto p:path)
        cout<<p<<" ";
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