#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    // int n;
    // cin>>n;
    ll w,h;
    cin>>w>>h;
    ll ans = 0;
    for(int i=0;i<4;i++){
        int k;
        cin>>k;
        ll a=0,b=0;
        for(int j=0;j<k;j++){
            ll X;
            cin>>X;
            if(j==0)
                a=X;
            if(j==k-1)
                b=X;
        }
        ans = max(ans, (b-a)*(i<2?h:w));
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