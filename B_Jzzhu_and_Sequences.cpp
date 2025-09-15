#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;
int main()
{
    ll x,y,n,res;
    cin>>x>>y>>n;
    ll ans[6]={x,y,y-x,-x,-y,x-y};
    res=(ans[(n-1)%6])%MOD;
    if(res<0)
    res=(res+MOD)%MOD;
    cout<<res<<"\n";
}