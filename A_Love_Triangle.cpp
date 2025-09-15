#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(arr[arr[arr[i]]]==i){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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