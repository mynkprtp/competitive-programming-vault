#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int x;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    cout<<mp[1]+mp[3]<<"\n";
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