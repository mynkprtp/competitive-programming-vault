#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int W,int m)
{
    int dp[m+1][W+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<=j)
            dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[m][W];

}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k,m;
        cin>>k>>m;
        // K is max weight
        int a[m],b[m];
        // A is weight and B is value         
        for(int i=0;i<m;i++)
        cin>>a[i]>>b[i];
        int max_val=knapsack(a,b,k,m);
        cout<<"Hey stupid robber, you can get "<<max_val<<".\n";
    }
}