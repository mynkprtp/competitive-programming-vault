#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ll dfs(int x, int y, vector<vector<int>>& arr, vector<vector<int>>& vis){
    if(x<0 || x==arr.size() || y<0 || y==arr[0].size())
        return 0;
    if(!arr[x][y])
        return 0;
    ll ans=0;
    if(!vis[x][y]){
        vis[x][y]=1;
        ans+=arr[x][y];
        ans+=dfs(x-1,y,arr,vis);
        ans+=dfs(x+1,y,arr,vis);
        ans+=dfs(x,y-1,arr,vis);
        ans+=dfs(x,y+1,arr,vis);
    }
    return ans;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m)),vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]){
                ans=max(ans,dfs(i,j,arr,vis));
            }
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