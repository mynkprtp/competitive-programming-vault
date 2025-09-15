#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    int a,b;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        int y=(n-2)/x;
        if(mp.find(y)!=mp.end() && x*y+2==n){ 
            a=x;
            b=y;
        }
        mp[x]=1;
    }
    cout<<a<<" "<<b<<"\n";
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