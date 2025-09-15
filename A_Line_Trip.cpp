#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    int prev=0;
    for(auto& i:arr)
        cin>>i;
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,arr[i]-prev);
        prev=arr[i];
    }
    ans=max(ans,2*(x-arr[n-1]));
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