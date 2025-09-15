#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,t;
    cin>>n>>t;
    vector<int> arr(n+1,-1);
    for(int i=1;i<=n-1;i++) {
        cin>>arr[i];
        arr[i]+=i;
    }
    int i=1;
    while(arr[i]!=-1){
        if(arr[i]==t){
            cout<<"YES\n";
            return;
        }
        i=arr[i];
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