#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[n]=0;
    sort(arr.begin(),arr.end());
    cout<<(arr[n]-arr[n-1]>1?"NO":"YES");
    cout<<"\n";
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
