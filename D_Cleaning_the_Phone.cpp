#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int INF=0x3f;
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
            dp[i][j]=INF;
            if(j==0)
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=min(b[i-1]+dp[i-1][j-a[i-1]],dp[i-1][j]);
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][m]<<"\n";
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}