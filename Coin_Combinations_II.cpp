#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

const int MOD = 1e9+7;

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
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if(j-coins[i]>=0){
                dp[j]+=dp[j-coins[i]];
                dp[j]%=MOD;
            }
        }
    }
    cout<<dp[x]<<"\n";
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