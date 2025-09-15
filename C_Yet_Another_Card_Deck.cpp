#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> a;
    int b;
    for(auto &i:a)
    cin>>a[i];
    for(int i=0;i<q;i++)
    {
        cin>>b;
        // cout<<b<<"\n";
        for(auto i:a)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
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