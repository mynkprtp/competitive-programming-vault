#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> v;
    int sum=0;
    v.push_back(make_pair(0,0));
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        sum=sum+b-a+1;
    }
    for(int i=1;i<=n;i++)
    {
        sum+=(v[i].first-v[i-1].second-1)%x;
    }
    cout<<sum<<"\n";
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