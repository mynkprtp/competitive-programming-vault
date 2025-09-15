#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int ans=0,val=-1;
    for(int i=1;i<n;i++){
        if(gcd(i,n)+i>ans){
            ans=gcd(i,n)+i;
            val=i;
        }
    }
    cout<<val<<"\n";
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