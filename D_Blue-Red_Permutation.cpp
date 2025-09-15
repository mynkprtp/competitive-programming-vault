#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<pair<char,int>> vp(n);
    int x;
    char ch;
    for(int i=0;i<n;i++){
        cin>>x;
        vp[i].second=x;
    }
    for(int i=0;i<n;i++){
        cin>>ch;
        vp[i].first=ch;
    }
    bool ok = true;
    sort(vp.begin(),vp.end());
    for(int i=1;i<=n;i++){
        ok &= (vp[i-1].first=='B'?(vp[i-1].second >=i):(vp[i-1].second <=i));
        // cout<<ok<<endl;
    }
    cout<<(ok?"YES\n":"NO\n");
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