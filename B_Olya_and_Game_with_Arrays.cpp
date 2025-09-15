#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    ll sum=0;
    int minV=INT_MAX;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr[i].resize(m);
        for(auto &j:arr[i]) {
            cin>>j;
        }
        sort(arr[i].begin(),arr[i].end());
        sum+=arr[i][1];
        if(minV>arr[i][0]){
            minV=arr[i][0];
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,sum-arr[i][1]+minV);
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