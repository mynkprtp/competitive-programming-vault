#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    if(2*a<b){
        ans=n*a;
    }else{
        ans=(n/2)*b+(n%2)*a;
    }
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