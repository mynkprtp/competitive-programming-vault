#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==m){
        cout<<"YES\n";
    }else if(n<m){
        cout<<"NO\n";
    }else{
        if((n-m)%2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
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