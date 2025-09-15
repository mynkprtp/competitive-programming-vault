#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int minv=INT_MAX,maxv=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        minv=min(minv,arr[i]);
        maxv=max(maxv,arr[i]);
    }
    cout<<maxv-minv<<"\n";
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