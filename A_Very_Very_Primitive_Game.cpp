#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=min(a,b);
    a=a-m;
    b=b-m;
    if(c==0)
    {
        if(a<=b)
        cout<<"Aoki\n";
        else
        cout<<"Takahashi\n";
    }
    else
    {
        if(a<b)
        cout<<"Aoki\n";
        else
        cout<<"Takahashi\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}