#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
    int dp[W+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=W;j>=wt[i];j--)
        {
            dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
        }
    }
    return dp[W];
}
int main()
{
    int k,n;
    cin>>k>>n;
    int v[n],w[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i]>>w[i];
    }
    
    int ans=knapsack(w,v,k,n);
    // cout<<dp[n][k]<<"\n";
    cout<<ans<<"\n";
}