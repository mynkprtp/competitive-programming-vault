#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int helper(vector<vector<int>> &arr, vector<vector<int>> &dp, int n, int m){
    if(n==0 && m==0)
        return arr[n][m];
    if(n<0 || m<0)
        return 1;
    if(dp[n][m]!=-1)
        return dp[n][m];
    int up=helper(arr,dp,n-1,m),left=helper(arr,dp,n,m-1);
    return dp[n][m]=max(dp[n][m],max(gcd(left,arr[n][m]),gcd(up,arr[n][m])));
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m)),dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<helper(arr,dp,n-1,m-1)<<"\n";
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