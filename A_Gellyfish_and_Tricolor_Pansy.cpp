#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
 


void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(min(a,c)<min(b,d))
        cout<<"Flower\n";
    else
        cout<<"Gellyfish\n";
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