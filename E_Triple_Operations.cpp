#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int dp[200007],pref[200007];

void solve()
{
    int l,r;
    cin>>l>>r;
    cout<<pref[r]-pref[l-1]+dp[l]<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    dp[0]=0;
    pref[0]=0;
    for(int i=1;i<200007;i++){
        dp[i]=dp[i/3]+1;
        pref[i]+=pref[i-1]+dp[i];
    }
    while(t--)
    {
        solve();       
    }
}