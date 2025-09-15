#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a=0,b=0;
    for(char ch:s) {
        if(ch=='1')   a++;
        else    b++;
    }
    if(abs(a-b)/2>k || (a/2 + b/2)<k || (k-abs(a-b)/2)%2==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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