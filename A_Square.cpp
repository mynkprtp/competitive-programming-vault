#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    vector<pair<int,int>> vp;
    int a,b;
    for(int i=0;i<4;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    cout<<abs(vp[3].first-vp[0].first)*abs(vp[3].second-vp[0].second)<<"\n";
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