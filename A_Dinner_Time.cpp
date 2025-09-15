#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    if(n%p==0){
        cout<<((n/p)*q==m?"YES\n":"NO\n");
    }else{
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