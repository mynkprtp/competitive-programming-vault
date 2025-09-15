#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b;
    cin>>a>>b;
    if(b==0)
    cout<<a+1<<"\n";
    else if(a==0)
    cout<<"1\n";
    else
    cout<<2*b+a+1<<"\n";
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