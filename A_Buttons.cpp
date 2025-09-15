#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    a+=c%2;
    if(b>=a)
        cout<<"Second\n";
    else   
        cout<<"First\n";
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