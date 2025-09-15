#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

const int mod=1e9+7;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(auto &i:coins) {
        cin>>i;
    }
    vector<int> dp(x+1);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            if(i-coins[j-1]>=0){
                dp[i]+=dp[i-coins[j-1]];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[x];
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