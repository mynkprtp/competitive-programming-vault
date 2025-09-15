#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    mp[a[i]]++;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        mp[a[x-1]]--;
        if(mp[a[x-1]]==0)
        mp.erase(a[x-1]);
        a[x-1]=y;
        mp[a[x-1]]++;
        cout<<mp.size()+1<<"\n";
    }
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}