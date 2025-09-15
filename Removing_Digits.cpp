#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int helper(int n, vector<int>& dp){
    if(n==0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int temp=n,mx=0;
    while(temp>0){
        mx=max(mx,temp%10);
        temp/=10;
    }
    return dp[n]=1+helper(n-mx,dp);
}

void solve()
{
    int n;
    cin>>n;
    vector<int> dp(1e7,-1);
    cout<<helper(n,dp)<<"\n";
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