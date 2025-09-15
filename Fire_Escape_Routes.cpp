#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
const int MOD=1e9+7;

vector<int> adj[N];
vector<bool> vis(N);
long long comp;
void dfs(int s)
{
    comp++;
    vis[s]=true;
    for(auto i:adj[s])
    {
        if(vis[i]==false)
        dfs(i);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,u,v;
        cin>>n>>m;
        for(int i=0;i<N;i++)
        {
            vis[i]=false;
            adj[i].clear();
        }
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count=0;
        long long result=1;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                comp=0;
                dfs(i);
                count++;
            result=(result*comp)%MOD;
            }
        }
        cout<<count<<" "<<result<<"\n";
        
    }
}