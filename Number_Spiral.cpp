#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll x,y;
    cin>>x>>y;
    ll row=1,col=1,i=0,mx=max(x,y);
    ll ans=0;
    if(mx%2){
        row=mx*mx;
        col=(mx-1)*(mx-1)+1;
    }else{
        row=(mx-1)*(mx-1)+1;
        col=mx*mx;
    }
    if(x<=y){
        if(mx%2){
            ans=row-x+1;
        }else{
            ans=row+x-1;
        }
    }else{
        if(mx%2){
            ans=col+y-1;
        } else{
            ans=col-y+1;
        }
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