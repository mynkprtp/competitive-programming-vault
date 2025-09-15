#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

const int INF = 1e7;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(auto &i:coins) {
        cin>>i;
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1, INF));
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            int take=INF;
            if(j-coins[i-1]>=0) take=1+dp[i][j-coins[i-1]];
            int notTake=dp[i-1][j];
            dp[i][j]=min(take,notTake);
        }
    }
    cout<<(dp[n][x]==INF?-1:dp[n][x])<<"\n";
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