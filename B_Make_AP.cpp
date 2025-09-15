#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+c==2*b)
    cout<<"YES\n";
    else{
        if(((a+c)%(2*b)==0 && (a+c)/(2*b)!=0 && (a+c==2*b*(a+c)/(2*b)) || ((2*b-c)%a==0 && (2*b-c)/a!=0 && ((2*b-c)/a)*a+c==2*b) || ((2*b-a)%c==0 && (2*b-a)/c!=0 && ((2*b-a)/c)*c+a==2*b)))
        cout<<"YES\n";
        else
        cout<<"NO\n";
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