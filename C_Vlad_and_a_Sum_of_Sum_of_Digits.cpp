#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
ll dp[200007];

ll calc(int num){
    int sum=0,n=num;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return dp[num]=sum;
}
void solve()
{
    int n;
    cin>>n;
    cout<<dp[n]<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    for(int i=1;i<=200007;i++){
        dp[i]=calc(i);
        dp[i]+=dp[i-1];
    }
    while(t--)
    {
        solve();       
    }
}