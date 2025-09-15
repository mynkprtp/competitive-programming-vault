#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int ans=0;

    while(x.size()<s.size()){
        x+=x;
        ans++;
    }
    if(x.find(s)==-1){
        x+=x;
        if(x.find(s)!=-1)
            ans++;
        else
            ans=-1;
    }
    cout<<ans<<"\n";
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