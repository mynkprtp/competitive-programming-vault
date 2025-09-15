#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    if(n>=10){
        ll x=n,cnt=0;
        while(x/10>0){
            cnt++;
            x/=10;
        }
        ans+=cnt*9;
        ans+=x-1;
        ll num=x;
        for(int i=1;i<=cnt;i++){
            num=num*10 + x;
        }
        if(num<=n)
        ans++;
    }
    else
    ans=n;
    cout<<ans<<"\n";
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