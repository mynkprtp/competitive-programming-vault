#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);


int dfs(int i, int prev, int d, vector<int> & arr){
    if(i==arr.size())
        return 1;
    if(abs(prev-i-1)-1<=d){
        return min(arr[i]+1+dfs(i+1,i+1,d,arr),dfs(i+1,prev+1,d,arr));
    }else{
        return arr[i]+1+dfs(i+1,i+1,d,arr);
    }
}

void solve()
{
    int n,m,d,k;
    cin>>n>>m>>d>>k;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> pref(n+1);
    for(int i=0;i<n;i++){
        pref[i+1]=1+dfs(1,1,d,arr[i])+pref[i];
        cout<<pref[i+1]<<" ";
    }
    cout<<"\n";
    int ans=INT_MAX;
    for(int i=k;i<=n;i++){
        ans=min(pref[i]-pref[i-k],ans);
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