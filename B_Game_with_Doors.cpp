#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    vector<pair<int,int>> a(2);
    cin>>a[0].first>>a[0].second;
    cin>>a[1].first>>a[1].second;
    sort(a.begin(),a.end());
    if(a[0]==a[1])
        cout<<a[0].second-a[0].first<<"\n";
    else if(a[0].second<a[1].first){
        cout<<1<<"\n";    
    }else{
        int ans=min(a[0].second,a[1].second)-max(a[0].first,a[1].first);
        if(a[0].first!=a[1].first)
            ans++;
        if(a[0].second!=a[1].second)
            ans++;
        cout<<ans<<"\n";
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