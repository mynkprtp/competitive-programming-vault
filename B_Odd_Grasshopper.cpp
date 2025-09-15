#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll ans =a;
    if(abs(a)%2){
        for(int i=0;i<b%4;i++){
            if(i==0)
            ans+=b-(b%4-i)+1;
            else
            ans-=b-(b%4-i)+1;
        }
    }
    else{
        for(int i=0;i<b%4;i++){
            if(i==0)
            ans-=b-(b%4-i)+1;
            else
            ans+=b-(b%4-i)+1;
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