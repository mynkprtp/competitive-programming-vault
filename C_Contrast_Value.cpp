#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1])
            b.push_back(a[i]);
    }
    // removed duplicates
    int ans = b.size();
    for(int i=1;i<b.size()-1;i++){
        if(b[i]>b[i-1] && b[i]<b[i+1])
            ans--;
        if(b[i]<b[i-1] && b[i]>b[i+1])
            ans--;
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