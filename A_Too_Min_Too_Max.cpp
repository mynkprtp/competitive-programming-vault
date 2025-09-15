#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    int i=arr[0], j=arr[1], k=arr[n-2], l=arr[n-1];
    cout<<l-i+k-i+l-j+k-j<<"\n";
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