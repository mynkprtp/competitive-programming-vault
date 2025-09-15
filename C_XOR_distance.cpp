#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll a,b,x;
    cin>>a>>b>>x;
    if(a<b)
        swap(a,b);
    ll l=0;r=x;
    int max=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll calc=abs(a^mid -b^mid);
        if(calc>=max){
            
        }
    }    
    
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